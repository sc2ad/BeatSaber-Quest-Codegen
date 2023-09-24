#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace Tayx::Graphy::Utils {
template<typename T>
class G_Singleton_1;
}
namespace Tayx::Graphy::Utils {
template<::cordl_internals::il2cpp_reference_type T>
class G_Singleton_1<T>;
}
// Type: Tayx.Graphy.Utils::G_Singleton`1
// Type: Tayx.Graphy.Utils::G_Singleton`1
namespace Tayx::Graphy::Utils {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166)), TypeDefinitionIndex(TypeDefinitionIndex(15193))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15193), inst: 2 })
// CS Name: Tayx.Graphy.Utils.G_Singleton`1
class CORDL_TYPE G_Singleton_1<T> : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~G_Singleton_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_Singleton_1", modifiers: " const&", def_value: None }]
constexpr G_Singleton_1(G_Singleton_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_Singleton_1", modifiers: "&&", def_value: None }]
constexpr G_Singleton_1(G_Singleton_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_Singleton_1(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr G_Singleton_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_Singleton_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_Singleton_1& operator=(G_Singleton_1&& o) noexcept = default;
  constexpr G_Singleton_1& operator=(G_Singleton_1 const& o) noexcept = default;
                


// Fields

static T __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(T value) ;

static T __get__instance() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

static void __set__lock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__lock() ;


// Properties

static T __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method get_Instance addr 0x0 size 0xffffffffffffffff virtual false final false
static T get_Instance() ;

/// @brief Method Awake addr 0x0 size 0xffffffffffffffff virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDestroy() ;

static Tayx::Graphy::Utils::G_Singleton_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Tayx::Graphy::Utils::G_Singleton_1, "Tayx.Graphy.Utils", "G_Singleton`1");
