#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class EmptyEnumerable_1;
}
namespace System::Linq {
template<::cordl_internals::il2cpp_reference_type TElement>
class EmptyEnumerable_1<TElement>;
}
namespace System::Linq {
template<>
class EmptyEnumerable_1<UnityEngine::InputSystem::Utilities::NameAndParameters>;
}
// Type: System.Linq::EmptyEnumerable`1
// Type: System.Linq::EmptyEnumerable`1
namespace System::Linq {
// cpp template
template<::cordl_internals::il2cpp_reference_type TElement>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14559))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14559), inst: 2 })
// CS Name: System.Linq.EmptyEnumerable`1
class CORDL_TYPE EmptyEnumerable_1<TElement> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: " const&", def_value: None }]
constexpr EmptyEnumerable_1(EmptyEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: "&&", def_value: None }]
constexpr EmptyEnumerable_1(EmptyEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyEnumerable_1& operator=(EmptyEnumerable_1&& o) noexcept = default;
  constexpr EmptyEnumerable_1& operator=(EmptyEnumerable_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<TElement> __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(::ArrayW<TElement> value) ;

static ::ArrayW<TElement> __get_Instance() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
// Type: System.Linq::EmptyEnumerable`1
namespace System::Linq {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14559))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14559), inst: 3004 })
// CS Name: System.Linq.EmptyEnumerable`1
class CORDL_TYPE EmptyEnumerable_1<UnityEngine::InputSystem::Utilities::NameAndParameters> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: " const&", def_value: None }]
constexpr EmptyEnumerable_1(EmptyEnumerable_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyEnumerable_1", modifiers: "&&", def_value: None }]
constexpr EmptyEnumerable_1(EmptyEnumerable_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyEnumerable_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyEnumerable_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyEnumerable_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyEnumerable_1& operator=(EmptyEnumerable_1&& o) noexcept = default;
  constexpr EmptyEnumerable_1& operator=(EmptyEnumerable_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> value) ;

static ::ArrayW<UnityEngine::InputSystem::Utilities::NameAndParameters> __get_Instance() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::EmptyEnumerable_1, "System.Linq", "EmptyEnumerable`1");
