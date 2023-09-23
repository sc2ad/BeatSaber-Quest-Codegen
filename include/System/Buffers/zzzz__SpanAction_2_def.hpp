#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
struct ValueTuple_8;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
// Forward declare root types
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System::Buffers {
template<::cordl_internals::il2cpp_reference_type TArg>
class SpanAction_2<char16_t,TArg>;
}
namespace System::Buffers {
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TArg>
class SpanAction_2<T,TArg>;
}
namespace System::Buffers {
template<>
class SpanAction_2<char16_t,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,int32_t,int32_t>>;
}
namespace System::Buffers {
template<>
class SpanAction_2<char16_t,System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>>;
}
namespace System::Buffers {
template<>
class SpanAction_2<char16_t,System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,System::ValueTuple_1<bool>>>;
}
// Type: System.Buffers::SpanAction`2
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T,::cordl_internals::il2cpp_reference_type TArg>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3864)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3864), inst: 80 })
// CS Name: System.Buffers.SpanAction`2
class CORDL_TYPE SpanAction_2<T,TArg> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SpanAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: " const&", def_value: None }]
constexpr SpanAction_2(SpanAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
constexpr SpanAction_2(SpanAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpanAction_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr SpanAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpanAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpanAction_2& operator=(SpanAction_2&& o) noexcept = default;
  constexpr SpanAction_2& operator=(SpanAction_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SpanAction_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Span_1<T> span, TArg arg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<::cordl_internals::il2cpp_reference_type TArg>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(3864))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3864), inst: 1526 })
// CS Name: System.Buffers.SpanAction`2
class CORDL_TYPE SpanAction_2<char16_t,TArg> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SpanAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: " const&", def_value: None }]
constexpr SpanAction_2(SpanAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
constexpr SpanAction_2(SpanAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpanAction_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr SpanAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpanAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpanAction_2& operator=(SpanAction_2&& o) noexcept = default;
  constexpr SpanAction_2& operator=(SpanAction_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SpanAction_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Span_1<char16_t> span, TArg arg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(3864))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3864), inst: 4832 })
// CS Name: System.Buffers.SpanAction`2
class CORDL_TYPE SpanAction_2<char16_t,System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SpanAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: " const&", def_value: None }]
constexpr SpanAction_2(SpanAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
constexpr SpanAction_2(SpanAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpanAction_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr SpanAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpanAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpanAction_2& operator=(SpanAction_2&& o) noexcept = default;
  constexpr SpanAction_2& operator=(SpanAction_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SpanAction_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Span_1<char16_t> span, System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool> arg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3864)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3864), inst: 4833 })
// CS Name: System.Buffers.SpanAction`2
class CORDL_TYPE SpanAction_2<char16_t,System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,System::ValueTuple_1<bool>>> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SpanAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: " const&", def_value: None }]
constexpr SpanAction_2(SpanAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
constexpr SpanAction_2(SpanAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpanAction_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr SpanAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpanAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpanAction_2& operator=(SpanAction_2&& o) noexcept = default;
  constexpr SpanAction_2& operator=(SpanAction_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SpanAction_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Span_1<char16_t> span, System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,System::ValueTuple_1<bool>> arg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::SpanAction`2
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3864)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3864), inst: 7502 })
// CS Name: System.Buffers.SpanAction`2
class CORDL_TYPE SpanAction_2<char16_t,System::ValueTuple_3<::bs_hook::Il2CppWrapperType,int32_t,int32_t>> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SpanAction_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: " const&", def_value: None }]
constexpr SpanAction_2(SpanAction_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
constexpr SpanAction_2(SpanAction_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpanAction_2(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr SpanAction_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpanAction_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpanAction_2& operator=(SpanAction_2&& o) noexcept = default;
  constexpr SpanAction_2& operator=(SpanAction_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SpanAction_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Span_1<char16_t> span, System::ValueTuple_3<::bs_hook::Il2CppWrapperType,int32_t,int32_t> arg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Buffers::SpanAction_2, "System.Buffers", "SpanAction`2");
