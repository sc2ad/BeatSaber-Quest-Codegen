#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct TreeInstance;
}
// Forward declare root types
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type TInput,::cordl_internals::il2cpp_reference_type TOutput>
class Converter_2<TInput,TOutput>;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type TOutput>
class Converter_2<::UnityEngine::TreeInstance,TOutput>;
}
namespace System {
template<>
class Converter_2<double_t,float_t>;
}
namespace System {
template<>
class Converter_2<int16_t,float_t>;
}
namespace System {
template<>
class Converter_2<int32_t,float_t>;
}
namespace System {
template<>
class Converter_2<int64_t,float_t>;
}
namespace System {
template<>
class Converter_2<int8_t,float_t>;
}
// Type: System::Converter`2
// Type: System::Converter`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type TInput,::cordl_internals::il2cpp_reference_type TOutput>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 80 })
// CS Name: System.Converter`2
class CORDL_TYPE Converter_2<TInput,TOutput> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Converter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: " const&", def_value: None }]
constexpr Converter_2(Converter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
constexpr Converter_2(Converter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Converter_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Converter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Converter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Converter_2& operator=(Converter_2&& o) noexcept = default;
  constexpr Converter_2& operator=(Converter_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Converter_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TOutput Invoke(TInput input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2340))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 512 })
// CS Name: System.Converter`2
class CORDL_TYPE Converter_2<int32_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Converter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: " const&", def_value: None }]
constexpr Converter_2(Converter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
constexpr Converter_2(Converter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Converter_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Converter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Converter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Converter_2& operator=(Converter_2&& o) noexcept = default;
  constexpr Converter_2& operator=(Converter_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Converter_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Invoke(int32_t input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 5497 })
// CS Name: System.Converter`2
class CORDL_TYPE Converter_2<double_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Converter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: " const&", def_value: None }]
constexpr Converter_2(Converter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
constexpr Converter_2(Converter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Converter_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Converter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Converter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Converter_2& operator=(Converter_2&& o) noexcept = default;
  constexpr Converter_2& operator=(Converter_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Converter_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Invoke(double_t input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 5498 })
// CS Name: System.Converter`2
class CORDL_TYPE Converter_2<int16_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Converter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: " const&", def_value: None }]
constexpr Converter_2(Converter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
constexpr Converter_2(Converter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Converter_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Converter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Converter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Converter_2& operator=(Converter_2&& o) noexcept = default;
  constexpr Converter_2& operator=(Converter_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Converter_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Invoke(int16_t input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 5499 })
// CS Name: System.Converter`2
class CORDL_TYPE Converter_2<int64_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Converter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: " const&", def_value: None }]
constexpr Converter_2(Converter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
constexpr Converter_2(Converter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Converter_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Converter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Converter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Converter_2& operator=(Converter_2&& o) noexcept = default;
  constexpr Converter_2& operator=(Converter_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Converter_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Invoke(int64_t input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610)), TypeDefinitionIndex(TypeDefinitionIndex(2340))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 5500 })
// CS Name: System.Converter`2
class CORDL_TYPE Converter_2<int8_t,float_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Converter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: " const&", def_value: None }]
constexpr Converter_2(Converter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
constexpr Converter_2(Converter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Converter_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Converter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Converter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Converter_2& operator=(Converter_2&& o) noexcept = default;
  constexpr Converter_2& operator=(Converter_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Converter_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t Invoke(int8_t input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::Converter`2
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type TOutput>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2340)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2340), inst: 6715 })
// CS Name: System.Converter`2
class CORDL_TYPE Converter_2<::UnityEngine::TreeInstance,TOutput> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Converter_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: " const&", def_value: None }]
constexpr Converter_2(Converter_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
constexpr Converter_2(Converter_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Converter_2(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr Converter_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Converter_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Converter_2& operator=(Converter_2&& o) noexcept = default;
  constexpr Converter_2& operator=(Converter_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Converter_2(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 TOutput Invoke(::UnityEngine::TreeInstance input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Converter_2, "System", "Converter`2");
