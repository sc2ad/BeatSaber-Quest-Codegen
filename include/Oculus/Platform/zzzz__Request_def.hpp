#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class Oculus__Platform__Message__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Request;
}
// Type: Oculus.Platform::Request
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13348))
// CS Name: Oculus.Platform.Request
class CORDL_TYPE Request : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Request() = default;

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: " const&", def_value: None }]
constexpr Request(Request const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "&&", def_value: None }]
constexpr Request(Request&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Request(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Request& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Request& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Request& operator=(Request&& o) noexcept = default;
  constexpr Request& operator=(Request const& o) noexcept = default;
                


// Fields

 Oculus::Platform::Oculus__Platform__Message__Callback __declspec(property(get=__get_callback_, put=__set_callback_))  callback_;

constexpr void __set_callback_(Oculus::Platform::Oculus__Platform__Message__Callback value) ;

constexpr Oculus::Platform::Oculus__Platform__Message__Callback __get_callback_() const;

 uint64_t __declspec(property(get=__get__RequestID_k__BackingField, put=__set__RequestID_k__BackingField))  _RequestID_k__BackingField;

constexpr void __set__RequestID_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__RequestID_k__BackingField() const;


// Properties

 uint64_t __declspec(property(get=get_RequestID, put=set_RequestID))  RequestID;


// Methods

// Ctor Parameters [CppParam { name: "requestID", ty: "uint64_t", modifiers: "", def_value: None }]
explicit Request(uint64_t requestID) ;

/// @brief Method .ctor addr 0x2593dc0 size 0x28 virtual false final false
 void _ctor(uint64_t requestID) ;

/// @brief Method get_RequestID addr 0x25991b0 size 0x8 virtual false final false
 uint64_t get_RequestID() ;

/// @brief Method set_RequestID addr 0x25991b8 size 0x8 virtual false final false
 void set_RequestID(uint64_t value) ;

/// @brief Method OnComplete addr 0x25991c0 size 0x70 virtual false final false
 Oculus::Platform::Request OnComplete(Oculus::Platform::Oculus__Platform__Message__Callback callback) ;

/// @brief Method HandleMessage addr 0x2599230 size 0x6c virtual true final false
 void HandleMessage(Oculus::Platform::Message msg) ;

/// @brief Method RunCallbacks addr 0x259929c size 0x70 virtual false final false
static void RunCallbacks(uint32_t limit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::Request);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Request, "Oculus.Platform", "Request");
