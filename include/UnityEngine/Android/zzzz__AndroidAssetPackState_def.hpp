#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::Android {
struct AndroidAssetPackError;
}
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPackState;
}
// Type: UnityEngine.Android::AndroidAssetPackState
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14891))
// CS Name: UnityEngine.Android.AndroidAssetPackState
class CORDL_TYPE AndroidAssetPackState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AndroidAssetPackState() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackState", modifiers: " const&", def_value: None }]
constexpr AndroidAssetPackState(AndroidAssetPackState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPackState", modifiers: "&&", def_value: None }]
constexpr AndroidAssetPackState(AndroidAssetPackState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidAssetPackState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidAssetPackState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidAssetPackState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidAssetPackState& operator=(AndroidAssetPackState&& o) noexcept = default;
  constexpr AndroidAssetPackState& operator=(AndroidAssetPackState const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;

 UnityEngine::Android::AndroidAssetPackStatus __declspec(property(get=__get__status_k__BackingField, put=__set__status_k__BackingField))  _status_k__BackingField;

constexpr void __set__status_k__BackingField(UnityEngine::Android::AndroidAssetPackStatus value) ;

constexpr UnityEngine::Android::AndroidAssetPackStatus __get__status_k__BackingField() const;

 UnityEngine::Android::AndroidAssetPackError __declspec(property(get=__get__error_k__BackingField, put=__set__error_k__BackingField))  _error_k__BackingField;

constexpr void __set__error_k__BackingField(UnityEngine::Android::AndroidAssetPackError value) ;

constexpr UnityEngine::Android::AndroidAssetPackError __get__error_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "status", ty: "UnityEngine::Android::AndroidAssetPackStatus", modifiers: "", def_value: None }, CppParam { name: "error", ty: "UnityEngine::Android::AndroidAssetPackError", modifiers: "", def_value: None }]
explicit AndroidAssetPackState(::StringW name, UnityEngine::Android::AndroidAssetPackStatus status, UnityEngine::Android::AndroidAssetPackError error) ;

/// @brief Method .ctor addr 0x2b16e08 size 0x3c virtual false final false
 void _ctor(::StringW name, UnityEngine::Android::AndroidAssetPackStatus status, UnityEngine::Android::AndroidAssetPackError error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
NEED_NO_BOX(UnityEngine::Android::AndroidAssetPackState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Android::AndroidAssetPackState, "UnityEngine.Android", "AndroidAssetPackState");
