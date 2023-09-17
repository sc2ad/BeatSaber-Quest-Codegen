#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace GlobalNamespace {
class OVRMesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior;
}
namespace GlobalNamespace {
class OVRMeshRenderer;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRMeshRenderer__MeshRendererData;
}
// Type: ::IOVRMeshRendererDataProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8924))
// CS Name: OVRMeshRenderer::IOVRMeshRendererDataProvider
class CORDL_TYPE ____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetMeshRendererData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__MeshRendererData GetMeshRendererData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MeshRendererData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8925))
// CS Name: OVRMeshRenderer::MeshRendererData
struct CORDL_TYPE ____GlobalNamespace__OVRMeshRenderer__MeshRendererData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_ShouldUseSystemGestureMaterial_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshRenderer__MeshRendererData(bool _IsDataValid_k__BackingField, bool _IsDataHighConfidence_k__BackingField, bool _ShouldUseSystemGestureMaterial_k__BackingField) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshRenderer__MeshRendererData(____GlobalNamespace__OVRMeshRenderer__MeshRendererData const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshRenderer__MeshRendererData(____GlobalNamespace__OVRMeshRenderer__MeshRendererData&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshRenderer__MeshRendererData& operator=(____GlobalNamespace__OVRMeshRenderer__MeshRendererData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshRenderer__MeshRendererData& operator=(____GlobalNamespace__OVRMeshRenderer__MeshRendererData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x3};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshRenderer__MeshRendererData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField))  _IsDataValid_k__BackingField;

constexpr void __set__IsDataValid_k__BackingField(bool value) ;

constexpr bool __get__IsDataValid_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField))  _IsDataHighConfidence_k__BackingField;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool value) ;

constexpr bool __get__IsDataHighConfidence_k__BackingField() const;

 bool __declspec(property(get=__get__ShouldUseSystemGestureMaterial_k__BackingField, put=__set__ShouldUseSystemGestureMaterial_k__BackingField))  _ShouldUseSystemGestureMaterial_k__BackingField;

constexpr void __set__ShouldUseSystemGestureMaterial_k__BackingField(bool value) ;

constexpr bool __get__ShouldUseSystemGestureMaterial_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsDataValid, put=set_IsDataValid))  IsDataValid;

 bool __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence))  IsDataHighConfidence;

 bool __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial))  ShouldUseSystemGestureMaterial;


// Methods

/// @brief Method get_IsDataValid addr 0x262694c size 0x8 virtual false final false
 bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x2626954 size 0xc virtual false final false
 void set_IsDataValid(bool value) ;

/// @brief Method get_IsDataHighConfidence addr 0x2626960 size 0x8 virtual false final false
 bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x2626968 size 0xc virtual false final false
 void set_IsDataHighConfidence(bool value) ;

/// @brief Method get_ShouldUseSystemGestureMaterial addr 0x2626974 size 0x8 virtual false final false
 bool get_ShouldUseSystemGestureMaterial() ;

/// @brief Method set_ShouldUseSystemGestureMaterial addr 0x262697c size 0xc virtual false final false
 void set_ShouldUseSystemGestureMaterial(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConfidenceBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8926))
// CS Name: OVRMeshRenderer::ConfidenceBehavior
struct CORDL_TYPE ____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior(____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior(____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior& operator=(____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior& operator=(____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior_Unwrapped : int32_t {
__None = 0,
__ToggleRenderer = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior const None;

/// @brief Field ToggleRenderer offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior const ToggleRenderer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SystemGestureBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8927))
// CS Name: OVRMeshRenderer::SystemGestureBehavior
struct CORDL_TYPE ____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior(____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior(____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior& operator=(____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior& operator=(____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior_Unwrapped : int32_t {
__None = 0,
__SwapMaterial = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior const None;

/// @brief Field SwapMaterial offset 0
static ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior const SwapMaterial;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRMeshRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8928))
// CS Name: OVRMeshRenderer
class CORDL_TYPE OVRMeshRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SystemGestureBehavior = ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior;

using ConfidenceBehavior = ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior;

using MeshRendererData = ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__MeshRendererData;

using IOVRMeshRendererDataProvider = ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~OVRMeshRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshRenderer", modifiers: " const&", def_value: None }]
constexpr OVRMeshRenderer(OVRMeshRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshRenderer", modifiers: "&&", def_value: None }]
constexpr OVRMeshRenderer(OVRMeshRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMeshRenderer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRMeshRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMeshRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMeshRenderer& operator=(OVRMeshRenderer&& o) noexcept = default;
  constexpr OVRMeshRenderer& operator=(OVRMeshRenderer const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider __declspec(property(get=__get__dataProvider, put=__set__dataProvider))  _dataProvider;

constexpr void __set__dataProvider(::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider __get__dataProvider() const;

 ::GlobalNamespace::OVRMesh __declspec(property(get=__get__ovrMesh, put=__set__ovrMesh))  _ovrMesh;

constexpr void __set__ovrMesh(::GlobalNamespace::OVRMesh value) ;

constexpr ::GlobalNamespace::OVRMesh __get__ovrMesh() const;

 ::GlobalNamespace::OVRSkeleton __declspec(property(get=__get__ovrSkeleton, put=__set__ovrSkeleton))  _ovrSkeleton;

constexpr void __set__ovrSkeleton(::GlobalNamespace::OVRSkeleton value) ;

constexpr ::GlobalNamespace::OVRSkeleton __get__ovrSkeleton() const;

 ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior __declspec(property(get=__get__confidenceBehavior, put=__set__confidenceBehavior))  _confidenceBehavior;

constexpr void __set__confidenceBehavior(::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior __get__confidenceBehavior() const;

 ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior __declspec(property(get=__get__systemGestureBehavior, put=__set__systemGestureBehavior))  _systemGestureBehavior;

constexpr void __set__systemGestureBehavior(::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior __get__systemGestureBehavior() const;

 ::UnityEngine::Material __declspec(property(get=__get__systemGestureMaterial, put=__set__systemGestureMaterial))  _systemGestureMaterial;

constexpr void __set__systemGestureMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__systemGestureMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get__originalMaterial, put=__set__originalMaterial))  _originalMaterial;

constexpr void __set__originalMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__originalMaterial() const;

 ::UnityEngine::SkinnedMeshRenderer __declspec(property(get=__get__skinnedMeshRenderer, put=__set__skinnedMeshRenderer))  _skinnedMeshRenderer;

constexpr void __set__skinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer value) ;

constexpr ::UnityEngine::SkinnedMeshRenderer __get__skinnedMeshRenderer() const;

 bool __declspec(property(get=__get__IsInitialized_k__BackingField, put=__set__IsInitialized_k__BackingField))  _IsInitialized_k__BackingField;

constexpr void __set__IsInitialized_k__BackingField(bool value) ;

constexpr bool __get__IsInitialized_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataValid_k__BackingField, put=__set__IsDataValid_k__BackingField))  _IsDataValid_k__BackingField;

constexpr void __set__IsDataValid_k__BackingField(bool value) ;

constexpr bool __get__IsDataValid_k__BackingField() const;

 bool __declspec(property(get=__get__IsDataHighConfidence_k__BackingField, put=__set__IsDataHighConfidence_k__BackingField))  _IsDataHighConfidence_k__BackingField;

constexpr void __set__IsDataHighConfidence_k__BackingField(bool value) ;

constexpr bool __get__IsDataHighConfidence_k__BackingField() const;

 bool __declspec(property(get=__get__ShouldUseSystemGestureMaterial_k__BackingField, put=__set__ShouldUseSystemGestureMaterial_k__BackingField))  _ShouldUseSystemGestureMaterial_k__BackingField;

constexpr void __set__ShouldUseSystemGestureMaterial_k__BackingField(bool value) ;

constexpr bool __get__ShouldUseSystemGestureMaterial_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsInitialized, put=set_IsInitialized))  IsInitialized;

 bool __declspec(property(get=get_IsDataValid, put=set_IsDataValid))  IsDataValid;

 bool __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence))  IsDataHighConfidence;

 bool __declspec(property(get=get_ShouldUseSystemGestureMaterial, put=set_ShouldUseSystemGestureMaterial))  ShouldUseSystemGestureMaterial;


// Methods

/// @brief Method get_IsInitialized addr 0x2625f1c size 0x8 virtual false final false
 bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x2625f24 size 0xc virtual false final false
 void set_IsInitialized(bool value) ;

/// @brief Method get_IsDataValid addr 0x2625f30 size 0x8 virtual false final false
 bool get_IsDataValid() ;

/// @brief Method set_IsDataValid addr 0x2625f38 size 0xc virtual false final false
 void set_IsDataValid(bool value) ;

/// @brief Method get_IsDataHighConfidence addr 0x2625f44 size 0x8 virtual false final false
 bool get_IsDataHighConfidence() ;

/// @brief Method set_IsDataHighConfidence addr 0x2625f4c size 0xc virtual false final false
 void set_IsDataHighConfidence(bool value) ;

/// @brief Method get_ShouldUseSystemGestureMaterial addr 0x2625f58 size 0x8 virtual false final false
 bool get_ShouldUseSystemGestureMaterial() ;

/// @brief Method set_ShouldUseSystemGestureMaterial addr 0x2625f60 size 0xc virtual false final false
 void set_ShouldUseSystemGestureMaterial(bool value) ;

/// @brief Method Awake addr 0x2625f6c size 0x104 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2626070 size 0x9c virtual false final false
 void Start() ;

/// @brief Method ShouldInitialize addr 0x262610c size 0xf0 virtual false final false
 bool ShouldInitialize() ;

/// @brief Method Initialize addr 0x26261fc size 0x4a0 virtual false final false
 void Initialize() ;

/// @brief Method Update addr 0x262669c size 0x2a0 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit OVRMeshRenderer() ;

/// @brief Method .ctor addr 0x262693c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__ConfidenceBehavior, "", "OVRMeshRenderer/ConfidenceBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__SystemGestureBehavior, "", "OVRMeshRenderer/SystemGestureBehavior");
NEED_NO_BOX(::GlobalNamespace::OVRMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshRenderer, "", "OVRMeshRenderer");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__IOVRMeshRendererDataProvider, "", "OVRMeshRenderer/IOVRMeshRendererDataProvider");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRMeshRenderer__MeshRendererData, "", "OVRMeshRenderer/MeshRendererData");
