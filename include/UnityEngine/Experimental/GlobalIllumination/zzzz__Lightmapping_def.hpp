#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Light;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
class Lightmapping;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class UnityEngine__Experimental__GlobalIllumination__Lightmapping____c;
}
// Type: ::RequestLightsDelegate
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10335))
// CS Name: UnityEngine.Experimental.GlobalIllumination.Lightmapping::RequestLightsDelegate
class CORDL_TYPE UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate(UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate(UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate& operator=(UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate&& o) noexcept = default;
  constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate& operator=(UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b7a3ac size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b7a484 size 0x14 virtual true final false
 void Invoke(::ArrayW<UnityEngine::Light> requests, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
// Type: ::<>c
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10336))
// CS Name: UnityEngine.Experimental.GlobalIllumination.Lightmapping::<>c
class CORDL_TYPE UnityEngine__Experimental__GlobalIllumination__Lightmapping____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__Experimental__GlobalIllumination__Lightmapping____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Experimental__GlobalIllumination__Lightmapping____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping____c(UnityEngine__Experimental__GlobalIllumination__Lightmapping____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Experimental__GlobalIllumination__Lightmapping____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping____c(UnityEngine__Experimental__GlobalIllumination__Lightmapping____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Experimental__GlobalIllumination__Lightmapping____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping____c& operator=(UnityEngine__Experimental__GlobalIllumination__Lightmapping____c&& o) noexcept = default;
  constexpr UnityEngine__Experimental__GlobalIllumination__Lightmapping____c& operator=(UnityEngine__Experimental__GlobalIllumination__Lightmapping____c const& o) noexcept = default;
                


// Fields

static UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping____c value) ;

static UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping____c __get___9() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__Experimental__GlobalIllumination__Lightmapping____c() ;

/// @brief Method .ctor addr 0x2b7a4fc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__7_0 addr 0x2b7a504 size 0x4c0 virtual false final false
 void __cctor_b__7_0(::ArrayW<UnityEngine::Light> requests, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
// Type: UnityEngine.Experimental.GlobalIllumination::Lightmapping
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10337))
// CS Name: UnityEngine.Experimental.GlobalIllumination.Lightmapping
class CORDL_TYPE Lightmapping : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping____c;

using RequestLightsDelegate = UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Lightmapping() = default;

// Ctor Parameters [CppParam { name: "", ty: "Lightmapping", modifiers: " const&", def_value: None }]
constexpr Lightmapping(Lightmapping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Lightmapping", modifiers: "&&", def_value: None }]
constexpr Lightmapping(Lightmapping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Lightmapping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Lightmapping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Lightmapping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Lightmapping& operator=(Lightmapping&& o) noexcept = default;
  constexpr Lightmapping& operator=(Lightmapping const& o) noexcept = default;
                


// Fields

static UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate __declspec(property(get=__get_s_DefaultDelegate, put=__set_s_DefaultDelegate))  s_DefaultDelegate;

static void __set_s_DefaultDelegate(UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate value) ;

static UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate __get_s_DefaultDelegate() ;

static UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate __declspec(property(get=__get_s_RequestLightsDelegate, put=__set_s_RequestLightsDelegate))  s_RequestLightsDelegate;

static void __set_s_RequestLightsDelegate(UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate value) ;

static UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate __get_s_RequestLightsDelegate() ;


// Methods

/// @brief Method SetDelegate addr 0x2b7a0e4 size 0x78 virtual false final false
static void SetDelegate(UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate del) ;

/// @brief Method GetDelegate addr 0x2b7a15c size 0x58 virtual false final false
static UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate GetDelegate() ;

/// @brief Method ResetDelegate addr 0x2b7a1b4 size 0x5c virtual false final false
static void ResetDelegate() ;

/// @brief Method RequestLights addr 0x2b7a210 size 0xcc virtual false final false
static void RequestLights(::ArrayW<UnityEngine::Light> lights, ::cordl_internals::intptr_t outLightsPtr, int32_t outLightsCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
NEED_NO_BOX(UnityEngine::Experimental::GlobalIllumination::Lightmapping);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::Lightmapping, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping");
NEED_NO_BOX(UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping__RequestLightsDelegate, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/RequestLightsDelegate");
NEED_NO_BOX(UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::UnityEngine__Experimental__GlobalIllumination__Lightmapping____c, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/<>c");
