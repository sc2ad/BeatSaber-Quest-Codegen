#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTimeOffset;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template<typename T>
class TryParseDelegate_1;
}
namespace System::Net::Http::Headers {
template<::cordl_internals::il2cpp_reference_type T>
class TryParseDelegate_1<T>;
}
namespace System::Net::Http::Headers {
template<>
class TryParseDelegate_1<System::DateTimeOffset>;
}
namespace System::Net::Http::Headers {
template<>
class TryParseDelegate_1<System::TimeSpan>;
}
namespace System::Net::Http::Headers {
template<>
class TryParseDelegate_1<int32_t>;
}
namespace System::Net::Http::Headers {
template<>
class TryParseDelegate_1<int64_t>;
}
// Type: System.Net.Http.Headers::TryParseDelegate`1
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14827)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14827), inst: 2 })
// CS Name: System.Net.Http.Headers.TryParseDelegate`1
class CORDL_TYPE TryParseDelegate_1<T> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TryParseDelegate_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: " const&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TryParseDelegate_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr TryParseDelegate_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1&& o) noexcept = default;
  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TryParseDelegate_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(::StringW value, ByRef<T> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(14827))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14827), inst: 92 })
// CS Name: System.Net.Http.Headers.TryParseDelegate`1
class CORDL_TYPE TryParseDelegate_1<int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TryParseDelegate_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: " const&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TryParseDelegate_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr TryParseDelegate_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1&& o) noexcept = default;
  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TryParseDelegate_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(::StringW value, ByRef<int32_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14827)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14827), inst: 830 })
// CS Name: System.Net.Http.Headers.TryParseDelegate`1
class CORDL_TYPE TryParseDelegate_1<int64_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TryParseDelegate_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: " const&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TryParseDelegate_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr TryParseDelegate_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1&& o) noexcept = default;
  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TryParseDelegate_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(::StringW value, ByRef<int64_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(14827))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14827), inst: 2596 })
// CS Name: System.Net.Http.Headers.TryParseDelegate`1
class CORDL_TYPE TryParseDelegate_1<System::DateTimeOffset> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TryParseDelegate_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: " const&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TryParseDelegate_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr TryParseDelegate_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1&& o) noexcept = default;
  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TryParseDelegate_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(::StringW value, ByRef<System::DateTimeOffset> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::TryParseDelegate`1
namespace System::Net::Http::Headers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(14827))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14827), inst: 2605 })
// CS Name: System.Net.Http.Headers.TryParseDelegate`1
class CORDL_TYPE TryParseDelegate_1<System::TimeSpan> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TryParseDelegate_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: " const&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TryParseDelegate_1", modifiers: "&&", def_value: None }]
constexpr TryParseDelegate_1(TryParseDelegate_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TryParseDelegate_1(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr TryParseDelegate_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1&& o) noexcept = default;
  constexpr TryParseDelegate_1& operator=(TryParseDelegate_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TryParseDelegate_1(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Invoke(::StringW value, ByRef<System::TimeSpan> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::Http::Headers::TryParseDelegate_1, "System.Net.Http.Headers", "TryParseDelegate`1");
