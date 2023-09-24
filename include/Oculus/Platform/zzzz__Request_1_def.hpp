#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include <cstdint>
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform {
class Message;
}
// Forward declare root types
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
template<::cordl_internals::il2cpp_reference_type T>
class Request_1<T>;
}
namespace Oculus::Platform {
template<>
class Request_1<bool>;
}
// Type: Oculus.Platform::Request`1
// Type: Oculus.Platform::Request`1
namespace Oculus::Platform {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13347)), TypeDefinitionIndex(TypeDefinitionIndex(13348))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13347), inst: 99 })
// CS Name: Oculus.Platform.Request`1
class CORDL_TYPE Request_1<bool> : public Oculus::Platform::Request {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Request_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: " const&", def_value: None }]
constexpr Request_1(Request_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "&&", def_value: None }]
constexpr Request_1(Request_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Request_1(void* ptr) noexcept : Oculus::Platform::Request(ptr) {
}


  constexpr Request_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Request_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Request_1& operator=(Request_1&& o) noexcept = default;
  constexpr Request_1& operator=(Request_1 const& o) noexcept = default;
                


// Fields

 Oculus::Platform::Oculus__Platform__Message_1__Callback<bool> __declspec(property(get=__get_callback_, put=__set_callback_))  callback_;

constexpr void __set_callback_(Oculus::Platform::Oculus__Platform__Message_1__Callback<bool> value) ;

constexpr Oculus::Platform::Oculus__Platform__Message_1__Callback<bool> __get_callback_() const;


// Methods

static Oculus::Platform::Request_1<bool> New_ctor(uint64_t requestID) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint64_t requestID) ;

/// @brief Method OnComplete addr 0x0 size 0xffffffffffffffff virtual false final false
 Oculus::Platform::Request_1<bool> OnComplete(Oculus::Platform::Oculus__Platform__Message_1__Callback<bool> callback) ;

/// @brief Method HandleMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleMessage(Oculus::Platform::Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::Request`1
namespace Oculus::Platform {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13347)), TypeDefinitionIndex(TypeDefinitionIndex(13348))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13347), inst: 2 })
// CS Name: Oculus.Platform.Request`1
class CORDL_TYPE Request_1<T> : public Oculus::Platform::Request {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Request_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: " const&", def_value: None }]
constexpr Request_1(Request_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "&&", def_value: None }]
constexpr Request_1(Request_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Request_1(void* ptr) noexcept : Oculus::Platform::Request(ptr) {
}


  constexpr Request_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Request_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Request_1& operator=(Request_1&& o) noexcept = default;
  constexpr Request_1& operator=(Request_1 const& o) noexcept = default;
                


// Fields

 Oculus::Platform::Oculus__Platform__Message_1__Callback<T> __declspec(property(get=__get_callback_, put=__set_callback_))  callback_;

constexpr void __set_callback_(Oculus::Platform::Oculus__Platform__Message_1__Callback<T> value) ;

constexpr Oculus::Platform::Oculus__Platform__Message_1__Callback<T> __get_callback_() const;


// Methods

static Oculus::Platform::Request_1<T> New_ctor(uint64_t requestID) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(uint64_t requestID) ;

/// @brief Method OnComplete addr 0x0 size 0xffffffffffffffff virtual false final false
 Oculus::Platform::Request_1<T> OnComplete(Oculus::Platform::Oculus__Platform__Message_1__Callback<T> callback) ;

/// @brief Method HandleMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 void HandleMessage(Oculus::Platform::Message msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Oculus::Platform::Request_1, "Oculus.Platform", "Request`1");
