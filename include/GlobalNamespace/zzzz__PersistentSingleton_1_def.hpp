#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class PersistentSingleton_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class PersistentSingleton_1<T>;
}
namespace {
// Type: ::PersistentSingleton`1
// Type: ::PersistentSingleton`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13880)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13880), inst: 2 })
// CS Name: PersistentSingleton`1
class CORDL_TYPE PersistentSingleton_1<T> : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PersistentSingleton_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PersistentSingleton_1", modifiers: " const&", def_value: None }]
constexpr PersistentSingleton_1(PersistentSingleton_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PersistentSingleton_1", modifiers: "&&", def_value: None }]
constexpr PersistentSingleton_1(PersistentSingleton_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PersistentSingleton_1(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PersistentSingleton_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PersistentSingleton_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PersistentSingleton_1& operator=(PersistentSingleton_1&& o) noexcept = default;
  constexpr PersistentSingleton_1& operator=(PersistentSingleton_1 const& o) noexcept = default;
                


// Fields

static T __declspec(property(get=__get__instance, put=__set__instance))  _instance;

static void __set__instance(T value) ;

static T __get__instance() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

static void __set__lock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get__lock() ;

static bool __declspec(property(get=__get__applicationIsQuitting, put=__set__applicationIsQuitting))  _applicationIsQuitting;

static void __set__applicationIsQuitting(bool value) ;

static bool __get__applicationIsQuitting() ;


// Properties

static T __declspec(property(get=get_instance))  instance;

static bool __declspec(property(get=get_IsSingletonAvailable))  IsSingletonAvailable;


// Methods

/// @brief Method get_instance addr 0x0 size 0xffffffffffffffff virtual false final false
static T get_instance() ;

/// @brief Method TouchInstance addr 0x0 size 0xffffffffffffffff virtual false final false
static void TouchInstance() ;

/// @brief Method get_IsSingletonAvailable addr 0x0 size 0xffffffffffffffff virtual false final false
static bool get_IsSingletonAvailable() ;

/// @brief Method OnEnable addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnEnable() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDestroy() ;

// Ctor Parameters []
explicit PersistentSingleton_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::PersistentSingleton_1, "", "PersistentSingleton`1");
} // end anonymous namespace
