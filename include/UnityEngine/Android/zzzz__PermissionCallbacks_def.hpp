#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::Android {
class PermissionCallbacks;
}
// Type: UnityEngine.Android::PermissionCallbacks
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14897))
// CS Name: UnityEngine.Android.PermissionCallbacks
class CORDL_TYPE PermissionCallbacks : public UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PermissionCallbacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbacks", modifiers: " const&", def_value: None }]
constexpr PermissionCallbacks(PermissionCallbacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PermissionCallbacks", modifiers: "&&", def_value: None }]
constexpr PermissionCallbacks(PermissionCallbacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PermissionCallbacks(void* ptr) noexcept : UnityEngine::AndroidJavaProxy(ptr) {
}


  constexpr PermissionCallbacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PermissionCallbacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PermissionCallbacks& operator=(PermissionCallbacks&& o) noexcept = default;
  constexpr PermissionCallbacks& operator=(PermissionCallbacks const& o) noexcept = default;
                


// Fields

 System::Action_1<::StringW> __declspec(property(get=__get_PermissionGranted, put=__set_PermissionGranted))  PermissionGranted;

constexpr void __set_PermissionGranted(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_PermissionGranted() const;

 System::Action_1<::StringW> __declspec(property(get=__get_PermissionDenied, put=__set_PermissionDenied))  PermissionDenied;

constexpr void __set_PermissionDenied(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_PermissionDenied() const;

 System::Action_1<::StringW> __declspec(property(get=__get_PermissionDeniedAndDontAskAgain, put=__set_PermissionDeniedAndDontAskAgain))  PermissionDeniedAndDontAskAgain;

constexpr void __set_PermissionDeniedAndDontAskAgain(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_PermissionDeniedAndDontAskAgain() const;


// Methods

/// @brief Method add_PermissionGranted addr 0x2b1789c size 0xb0 virtual false final false
 void add_PermissionGranted(System::Action_1<::StringW> value) ;

/// @brief Method remove_PermissionGranted addr 0x2b1794c size 0xb0 virtual false final false
 void remove_PermissionGranted(System::Action_1<::StringW> value) ;

/// @brief Method add_PermissionDenied addr 0x2b179fc size 0xb0 virtual false final false
 void add_PermissionDenied(System::Action_1<::StringW> value) ;

/// @brief Method remove_PermissionDenied addr 0x2b17aac size 0xb0 virtual false final false
 void remove_PermissionDenied(System::Action_1<::StringW> value) ;

/// @brief Method add_PermissionDeniedAndDontAskAgain addr 0x2b17b5c size 0xb0 virtual false final false
 void add_PermissionDeniedAndDontAskAgain(System::Action_1<::StringW> value) ;

/// @brief Method remove_PermissionDeniedAndDontAskAgain addr 0x2b17c0c size 0xb0 virtual false final false
 void remove_PermissionDeniedAndDontAskAgain(System::Action_1<::StringW> value) ;

// Ctor Parameters []
explicit PermissionCallbacks() ;

/// @brief Method .ctor addr 0x2b17cbc size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method onPermissionGranted addr 0x2b17d28 size 0x1c virtual false final false
 void onPermissionGranted(::StringW permissionName) ;

/// @brief Method onPermissionDenied addr 0x2b17d44 size 0x1c virtual false final false
 void onPermissionDenied(::StringW permissionName) ;

/// @brief Method onPermissionDeniedAndDontAskAgain addr 0x2b17d60 size 0x24 virtual false final false
 void onPermissionDeniedAndDontAskAgain(::StringW permissionName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
NEED_NO_BOX(UnityEngine::Android::PermissionCallbacks);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Android::PermissionCallbacks, "UnityEngine.Android", "PermissionCallbacks");
