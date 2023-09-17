#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Oculus::Platform {
template<typename T>
class ____Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform {
template<::cordl_internals::il2cpp_reference_type T>
class Message_1<T>;
}
namespace Oculus::Platform {
template<>
class Message_1<bool>;
}
namespace Oculus::Platform {
template<::cordl_internals::il2cpp_reference_type T>
class ____Oculus__Platform__Message_1__Callback<T>;
}
namespace Oculus::Platform {
template<>
class ____Oculus__Platform__Message_1__Callback<bool>;
}
// Type: ::Callback
// Type: Oculus.Platform::Message`1
// Type: ::Callback
namespace Oculus::Platform {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(13202))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13202), inst: 2 })
// CS Name: Oculus.Platform.Message`1::Callback
class CORDL_TYPE ____Oculus__Platform__Message_1__Callback<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____Oculus__Platform__Message_1__Callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Message_1__Callback", modifiers: " const&", def_value: None }]
constexpr ____Oculus__Platform__Message_1__Callback(____Oculus__Platform__Message_1__Callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Message_1__Callback", modifiers: "&&", def_value: None }]
constexpr ____Oculus__Platform__Message_1__Callback(____Oculus__Platform__Message_1__Callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Oculus__Platform__Message_1__Callback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____Oculus__Platform__Message_1__Callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Oculus__Platform__Message_1__Callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Oculus__Platform__Message_1__Callback& operator=(____Oculus__Platform__Message_1__Callback&& o) noexcept = default;
  constexpr ____Oculus__Platform__Message_1__Callback& operator=(____Oculus__Platform__Message_1__Callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____Oculus__Platform__Message_1__Callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::Oculus::Platform::Message_1<T> message) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::IAsyncResult BeginInvoke(::Oculus::Platform::Message_1<T> message, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::Callback
namespace Oculus::Platform {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13202)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13202), inst: 99 })
// CS Name: Oculus.Platform.Message`1::Callback
class CORDL_TYPE ____Oculus__Platform__Message_1__Callback<bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____Oculus__Platform__Message_1__Callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Message_1__Callback", modifiers: " const&", def_value: None }]
constexpr ____Oculus__Platform__Message_1__Callback(____Oculus__Platform__Message_1__Callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Message_1__Callback", modifiers: "&&", def_value: None }]
constexpr ____Oculus__Platform__Message_1__Callback(____Oculus__Platform__Message_1__Callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Oculus__Platform__Message_1__Callback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____Oculus__Platform__Message_1__Callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Oculus__Platform__Message_1__Callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Oculus__Platform__Message_1__Callback& operator=(____Oculus__Platform__Message_1__Callback&& o) noexcept = default;
  constexpr ____Oculus__Platform__Message_1__Callback& operator=(____Oculus__Platform__Message_1__Callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____Oculus__Platform__Message_1__Callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(::Oculus::Platform::Message_1<bool> message) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::IAsyncResult BeginInvoke(::Oculus::Platform::Message_1<bool> message, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::Message`1
namespace Oculus::Platform {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13207))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 2 })
// CS Name: Oculus.Platform.Message`1
class CORDL_TYPE Message_1<T> : public ::Oculus::Platform::Message {
public:
// Declarations
using Callback = ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Message_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: " const&", def_value: None }]
constexpr Message_1(Message_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: "&&", def_value: None }]
constexpr Message_1(Message_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Message_1(void* ptr) noexcept : ::Oculus::Platform::Message(ptr) {
}


  constexpr Message_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Message_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Message_1& operator=(Message_1&& o) noexcept = default;
  constexpr Message_1& operator=(Message_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(T value) ;

constexpr T __get_data() const;


// Properties

 T __declspec(property(get=get_Data))  Data;


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Message_1(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Data() ;

/// @brief Method GetDataFromMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 T GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::Message`1
namespace Oculus::Platform {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13203)), TypeDefinitionIndex(TypeDefinitionIndex(13207))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13203), inst: 99 })
// CS Name: Oculus.Platform.Message`1
class CORDL_TYPE Message_1<bool> : public ::Oculus::Platform::Message {
public:
// Declarations
using Callback = ::Oculus::Platform::____Oculus__Platform__Message_1__Callback<bool>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Message_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: " const&", def_value: None }]
constexpr Message_1(Message_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: "&&", def_value: None }]
constexpr Message_1(Message_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Message_1(void* ptr) noexcept : ::Oculus::Platform::Message(ptr) {
}


  constexpr Message_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Message_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Message_1& operator=(Message_1&& o) noexcept = default;
  constexpr Message_1& operator=(Message_1 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(bool value) ;

constexpr bool __get_data() const;


// Properties

 bool __declspec(property(get=get_Data))  Data;


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Message_1(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_Data() ;

/// @brief Method GetDataFromMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 bool GetDataFromMessage(::cordl_internals::intptr_t c_message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Message_1, "Oculus.Platform", "Message`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::____Oculus__Platform__Message_1__Callback, "Oculus.Platform", "Message`1/Callback");
