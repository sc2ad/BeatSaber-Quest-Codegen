#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPackUseMobileDataRequestResult;
}
// Type: UnityEngine.Android::AndroidAssetPackUseMobileDataRequestResult
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14892))
// CS Name: UnityEngine.Android.AndroidAssetPackUseMobileDataRequestResult
class CORDL_TYPE AndroidAssetPackUseMobileDataRequestResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AndroidAssetPackUseMobileDataRequestResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackUseMobileDataRequestResult", modifiers: " const&", def_value: None }]
constexpr AndroidAssetPackUseMobileDataRequestResult(AndroidAssetPackUseMobileDataRequestResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackUseMobileDataRequestResult", modifiers: "&&", def_value: None }]
constexpr AndroidAssetPackUseMobileDataRequestResult(AndroidAssetPackUseMobileDataRequestResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidAssetPackUseMobileDataRequestResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidAssetPackUseMobileDataRequestResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidAssetPackUseMobileDataRequestResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidAssetPackUseMobileDataRequestResult& operator=(AndroidAssetPackUseMobileDataRequestResult&& o) noexcept = default;
  constexpr AndroidAssetPackUseMobileDataRequestResult& operator=(AndroidAssetPackUseMobileDataRequestResult const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__allowed_k__BackingField, put=__set__allowed_k__BackingField))  _allowed_k__BackingField;

constexpr void __set__allowed_k__BackingField(bool value) ;

constexpr bool __get__allowed_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "allowed", ty: "bool", modifiers: "", def_value: None }]
explicit AndroidAssetPackUseMobileDataRequestResult(bool allowed) ;

/// @brief Method .ctor addr 0x2b16e44 size 0x28 virtual false final false
 void _ctor(bool allowed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
NEED_NO_BOX(UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult, "UnityEngine.Android", "AndroidAssetPackUseMobileDataRequestResult");
