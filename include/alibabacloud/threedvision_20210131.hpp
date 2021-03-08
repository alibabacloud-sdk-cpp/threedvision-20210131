// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_THREEDVISION20210131_H_
#define ALIBABACLOUD_THREEDVISION20210131_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Threedvision20210131 {
class ReconstructBodyBySingleImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ReconstructBodyBySingleImageRequest() {}

  explicit ReconstructBodyBySingleImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~ReconstructBodyBySingleImageRequest() = default;
};
class ReconstructBodyBySingleImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  ReconstructBodyBySingleImageAdvanceRequest() {}

  explicit ReconstructBodyBySingleImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~ReconstructBodyBySingleImageAdvanceRequest() = default;
};
class ReconstructBodyBySingleImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> depthURL{};
  shared_ptr<string> meshURL{};

  ReconstructBodyBySingleImageResponseBodyData() {}

  explicit ReconstructBodyBySingleImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depthURL) {
      res["DepthURL"] = boost::any(*depthURL);
    }
    if (meshURL) {
      res["MeshURL"] = boost::any(*meshURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepthURL") != m.end() && !m["DepthURL"].empty()) {
      depthURL = make_shared<string>(boost::any_cast<string>(m["DepthURL"]));
    }
    if (m.find("MeshURL") != m.end() && !m["MeshURL"].empty()) {
      meshURL = make_shared<string>(boost::any_cast<string>(m["MeshURL"]));
    }
  }


  virtual ~ReconstructBodyBySingleImageResponseBodyData() = default;
};
class ReconstructBodyBySingleImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ReconstructBodyBySingleImageResponseBodyData> data{};

  ReconstructBodyBySingleImageResponseBody() {}

  explicit ReconstructBodyBySingleImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ReconstructBodyBySingleImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReconstructBodyBySingleImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~ReconstructBodyBySingleImageResponseBody() = default;
};
class ReconstructBodyBySingleImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReconstructBodyBySingleImageResponseBody> body{};

  ReconstructBodyBySingleImageResponse() {}

  explicit ReconstructBodyBySingleImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReconstructBodyBySingleImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReconstructBodyBySingleImageResponseBody>(model1);
      }
    }
  }


  virtual ~ReconstructBodyBySingleImageResponse() = default;
};
class EstimateMonocularImageDepthRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  EstimateMonocularImageDepthRequest() {}

  explicit EstimateMonocularImageDepthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~EstimateMonocularImageDepthRequest() = default;
};
class EstimateMonocularImageDepthAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  EstimateMonocularImageDepthAdvanceRequest() {}

  explicit EstimateMonocularImageDepthAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~EstimateMonocularImageDepthAdvanceRequest() = default;
};
class EstimateMonocularImageDepthResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> depthMapUrl{};
  shared_ptr<string> depthToColorUrl{};

  EstimateMonocularImageDepthResponseBodyData() {}

  explicit EstimateMonocularImageDepthResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depthMapUrl) {
      res["DepthMapUrl"] = boost::any(*depthMapUrl);
    }
    if (depthToColorUrl) {
      res["DepthToColorUrl"] = boost::any(*depthToColorUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DepthMapUrl") != m.end() && !m["DepthMapUrl"].empty()) {
      depthMapUrl = make_shared<string>(boost::any_cast<string>(m["DepthMapUrl"]));
    }
    if (m.find("DepthToColorUrl") != m.end() && !m["DepthToColorUrl"].empty()) {
      depthToColorUrl = make_shared<string>(boost::any_cast<string>(m["DepthToColorUrl"]));
    }
  }


  virtual ~EstimateMonocularImageDepthResponseBodyData() = default;
};
class EstimateMonocularImageDepthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EstimateMonocularImageDepthResponseBodyData> data{};

  EstimateMonocularImageDepthResponseBody() {}

  explicit EstimateMonocularImageDepthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EstimateMonocularImageDepthResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EstimateMonocularImageDepthResponseBodyData>(model1);
      }
    }
  }


  virtual ~EstimateMonocularImageDepthResponseBody() = default;
};
class EstimateMonocularImageDepthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EstimateMonocularImageDepthResponseBody> body{};

  EstimateMonocularImageDepthResponse() {}

  explicit EstimateMonocularImageDepthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EstimateMonocularImageDepthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EstimateMonocularImageDepthResponseBody>(model1);
      }
    }
  }


  virtual ~EstimateMonocularImageDepthResponse() = default;
};
class EstimateStereoImageDepthRequest : public Darabonba::Model {
public:
  shared_ptr<string> leftImageURL{};
  shared_ptr<string> rightImageURL{};

  EstimateStereoImageDepthRequest() {}

  explicit EstimateStereoImageDepthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (leftImageURL) {
      res["LeftImageURL"] = boost::any(*leftImageURL);
    }
    if (rightImageURL) {
      res["RightImageURL"] = boost::any(*rightImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LeftImageURL") != m.end() && !m["LeftImageURL"].empty()) {
      leftImageURL = make_shared<string>(boost::any_cast<string>(m["LeftImageURL"]));
    }
    if (m.find("RightImageURL") != m.end() && !m["RightImageURL"].empty()) {
      rightImageURL = make_shared<string>(boost::any_cast<string>(m["RightImageURL"]));
    }
  }


  virtual ~EstimateStereoImageDepthRequest() = default;
};
class EstimateStereoImageDepthResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> disparityMapURL{};
  shared_ptr<string> disparityVisURL{};

  EstimateStereoImageDepthResponseBodyData() {}

  explicit EstimateStereoImageDepthResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disparityMapURL) {
      res["DisparityMapURL"] = boost::any(*disparityMapURL);
    }
    if (disparityVisURL) {
      res["DisparityVisURL"] = boost::any(*disparityVisURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisparityMapURL") != m.end() && !m["DisparityMapURL"].empty()) {
      disparityMapURL = make_shared<string>(boost::any_cast<string>(m["DisparityMapURL"]));
    }
    if (m.find("DisparityVisURL") != m.end() && !m["DisparityVisURL"].empty()) {
      disparityVisURL = make_shared<string>(boost::any_cast<string>(m["DisparityVisURL"]));
    }
  }


  virtual ~EstimateStereoImageDepthResponseBodyData() = default;
};
class EstimateStereoImageDepthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EstimateStereoImageDepthResponseBodyData> data{};

  EstimateStereoImageDepthResponseBody() {}

  explicit EstimateStereoImageDepthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EstimateStereoImageDepthResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EstimateStereoImageDepthResponseBodyData>(model1);
      }
    }
  }


  virtual ~EstimateStereoImageDepthResponseBody() = default;
};
class EstimateStereoImageDepthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EstimateStereoImageDepthResponseBody> body{};

  EstimateStereoImageDepthResponse() {}

  explicit EstimateStereoImageDepthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EstimateStereoImageDepthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EstimateStereoImageDepthResponseBody>(model1);
      }
    }
  }


  virtual ~EstimateStereoImageDepthResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  ReconstructBodyBySingleImageResponse reconstructBodyBySingleImageWithOptions(shared_ptr<ReconstructBodyBySingleImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReconstructBodyBySingleImageResponse reconstructBodyBySingleImage(shared_ptr<ReconstructBodyBySingleImageRequest> request);
  ReconstructBodyBySingleImageResponse reconstructBodyBySingleImageAdvance(shared_ptr<ReconstructBodyBySingleImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimateMonocularImageDepthResponse estimateMonocularImageDepthWithOptions(shared_ptr<EstimateMonocularImageDepthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimateMonocularImageDepthResponse estimateMonocularImageDepth(shared_ptr<EstimateMonocularImageDepthRequest> request);
  EstimateMonocularImageDepthResponse estimateMonocularImageDepthAdvance(shared_ptr<EstimateMonocularImageDepthAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimateStereoImageDepthResponse estimateStereoImageDepthWithOptions(shared_ptr<EstimateStereoImageDepthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EstimateStereoImageDepthResponse estimateStereoImageDepth(shared_ptr<EstimateStereoImageDepthRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Threedvision20210131

#endif
