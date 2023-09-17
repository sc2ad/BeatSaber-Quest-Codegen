#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
// Forward declare root types
namespace RootMotion {
template<typename T>
class Singleton_1;
}
namespace RootMotion {
template<::cordl_internals::il2cpp_reference_type T>
class Singleton_1<T>;
}
// Type: RootMotion::Singleton`1
// Type: RootMotion::Singleton`1
namespace RootMotion {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12440)), TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12440), inst: 2 })
// CS Name: RootMotion.Singleton`1
class CORDL_TYPE Singleton_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Singleton_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Singleton_1", modifiers: " const&", def_value: None }]
constexpr Singleton_1(Singleton_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Singleton_1", modifiers: "&&", def_value: None }]
constexpr Singleton_1(Singleton_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Singleton_1(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Singleton_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Singleton_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Singleton_1& operator=(Singleton_1&& o) noexcept = default;
  constexpr Singleton_1& operator=(Singleton_1 const& o) noexcept = default;
                


// Fields

static T __declspec(property(get=__get_sInstance, put=__set_sInstance))  sInstance;

static void __set_sInstance(T value) ;

static T __get_sInstance() ;


// Properties

static T __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_instance addr 0x0 size 0xffffffffffffffff virtual false final false
static T get_instance() ;

/// @brief Method Awake addr 0x0 size 0xffffffffffffffff virtual true final false
 void Awake() ;

// Ctor Parameters []
explicit Singleton_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::RootMotion::Singleton_1, "RootMotion", "Singleton`1");
