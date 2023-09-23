#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
struct UnityEngine__Networking__UnityWebRequest__Result;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class UnityWebRequestResult;
}
// Type: UnityEngine.ResourceManagement.Util::UnityWebRequestResult
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14268))
// CS Name: UnityEngine.ResourceManagement.Util.UnityWebRequestResult
class CORDL_TYPE UnityWebRequestResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UnityWebRequestResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestResult", modifiers: " const&", def_value: None }]
constexpr UnityWebRequestResult(UnityWebRequestResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestResult", modifiers: "&&", def_value: None }]
constexpr UnityWebRequestResult(UnityWebRequestResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityWebRequestResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityWebRequestResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityWebRequestResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityWebRequestResult& operator=(UnityWebRequestResult&& o) noexcept = default;
  constexpr UnityWebRequestResult& operator=(UnityWebRequestResult const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Error_k__BackingField, put=__set__Error_k__BackingField))  _Error_k__BackingField;

constexpr void __set__Error_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Error_k__BackingField() const;

 int64_t __declspec(property(get=__get__ResponseCode_k__BackingField, put=__set__ResponseCode_k__BackingField))  _ResponseCode_k__BackingField;

constexpr void __set__ResponseCode_k__BackingField(int64_t value) ;

constexpr int64_t __get__ResponseCode_k__BackingField() const;

 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result __declspec(property(get=__get__Result_k__BackingField, put=__set__Result_k__BackingField))  _Result_k__BackingField;

constexpr void __set__Result_k__BackingField(UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result value) ;

constexpr UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result __get__Result_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Method_k__BackingField, put=__set__Method_k__BackingField))  _Method_k__BackingField;

constexpr void __set__Method_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Method_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Url_k__BackingField, put=__set__Url_k__BackingField))  _Url_k__BackingField;

constexpr void __set__Url_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Url_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Error, put=set_Error))  Error;

 int64_t __declspec(property(get=get_ResponseCode))  ResponseCode;

 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result __declspec(property(get=get_Result))  Result;

 ::StringW __declspec(property(get=get_Method))  Method;

 ::StringW __declspec(property(get=get_Url))  Url;


// Methods

// Ctor Parameters [CppParam { name: "request", ty: "UnityEngine::Networking::UnityWebRequest", modifiers: "", def_value: None }]
explicit UnityWebRequestResult(UnityEngine::Networking::UnityWebRequest request) ;

/// @brief Method .ctor addr 0x2a3b92c size 0x108 virtual false final false
 void _ctor(UnityEngine::Networking::UnityWebRequest request) ;

/// @brief Method ToString addr 0x2a3ba3c size 0x180 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_Error addr 0x2a3bbbc size 0x8 virtual false final false
 ::StringW get_Error() ;

/// @brief Method set_Error addr 0x2a3bbc4 size 0x8 virtual false final false
 void set_Error(::StringW value) ;

/// @brief Method get_ResponseCode addr 0x2a3bbcc size 0x8 virtual false final false
 int64_t get_ResponseCode() ;

/// @brief Method get_Result addr 0x2a3bbd4 size 0x8 virtual false final false
 UnityEngine::Networking::UnityEngine__Networking__UnityWebRequest__Result get_Result() ;

/// @brief Method get_Method addr 0x2a3bbdc size 0x8 virtual false final false
 ::StringW get_Method() ;

/// @brief Method get_Url addr 0x2a3bbe4 size 0x8 virtual false final false
 ::StringW get_Url() ;

/// @brief Method ShouldRetryDownloadError addr 0x2a3bbec size 0x2d0 virtual false final false
 bool ShouldRetryDownloadError() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::UnityWebRequestResult);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::UnityWebRequestResult, "UnityEngine.ResourceManagement.Util", "UnityWebRequestResult");
