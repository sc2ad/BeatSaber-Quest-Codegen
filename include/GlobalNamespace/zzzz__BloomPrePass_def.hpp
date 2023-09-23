#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassRenderDataSO__Data;
}
namespace GlobalNamespace {
class BloomPrePassRendererSO;
}
namespace GlobalNamespace {
class BloomPrePassRenderDataSO;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePass__Mode;
}
namespace GlobalNamespace {
class BloomPrePass;
}
// Type: ::Mode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14616))
// CS Name: BloomPrePass::Mode
struct CORDL_TYPE GlobalNamespace__BloomPrePass__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BloomPrePass__Mode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__BloomPrePass__Mode(GlobalNamespace__BloomPrePass__Mode const&) = default;
                    constexpr GlobalNamespace__BloomPrePass__Mode(GlobalNamespace__BloomPrePass__Mode&&) = default;
                    constexpr GlobalNamespace__BloomPrePass__Mode& operator=(GlobalNamespace__BloomPrePass__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BloomPrePass__Mode& operator=(GlobalNamespace__BloomPrePass__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePass__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__BloomPrePass__Mode_Unwrapped : int32_t {
__RenderAndSetData = 0,
__SetDataOnly = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__BloomPrePass__Mode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__BloomPrePass__Mode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field RenderAndSetData offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePass__Mode const RenderAndSetData;

/// @brief Field SetDataOnly offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePass__Mode const SetDataOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePass
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14617))
// CS Name: BloomPrePass
class CORDL_TYPE BloomPrePass : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = GlobalNamespace::GlobalNamespace__BloomPrePass__Mode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BloomPrePass() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePass", modifiers: " const&", def_value: None }]
constexpr BloomPrePass(BloomPrePass const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePass", modifiers: "&&", def_value: None }]
constexpr BloomPrePass(BloomPrePass&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePass(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BloomPrePass& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePass& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePass& operator=(BloomPrePass&& o) noexcept = default;
  constexpr BloomPrePass& operator=(BloomPrePass const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassRendererSO __declspec(property(get=__get__bloomPrepassRenderer, put=__set__bloomPrepassRenderer))  _bloomPrepassRenderer;

constexpr void __set__bloomPrepassRenderer(GlobalNamespace::BloomPrePassRendererSO value) ;

constexpr GlobalNamespace::BloomPrePassRendererSO __get__bloomPrepassRenderer() const;

 GlobalNamespace::BloomPrePassEffectContainerSO __declspec(property(get=__get__bloomPrePassEffectContainer, put=__set__bloomPrePassEffectContainer))  _bloomPrePassEffectContainer;

constexpr void __set__bloomPrePassEffectContainer(GlobalNamespace::BloomPrePassEffectContainerSO value) ;

constexpr GlobalNamespace::BloomPrePassEffectContainerSO __get__bloomPrePassEffectContainer() const;

 GlobalNamespace::BloomPrePassRenderDataSO __declspec(property(get=__get__bloomPrePassRenderData, put=__set__bloomPrePassRenderData))  _bloomPrePassRenderData;

constexpr void __set__bloomPrePassRenderData(GlobalNamespace::BloomPrePassRenderDataSO value) ;

constexpr GlobalNamespace::BloomPrePassRenderDataSO __get__bloomPrePassRenderData() const;

 GlobalNamespace::GlobalNamespace__BloomPrePass__Mode __declspec(property(get=__get__mode, put=__set__mode))  _mode;

constexpr void __set__mode(GlobalNamespace::GlobalNamespace__BloomPrePass__Mode value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePass__Mode __get__mode() const;

 GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data __declspec(property(get=__get__renderData, put=__set__renderData))  _renderData;

constexpr void __set__renderData(GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassRenderDataSO__Data __get__renderData() const;


// Methods

/// @brief Method Awake addr 0x1f9088c size 0x4 virtual false final false
 void Awake() ;

/// @brief Method LazyInit addr 0x1f90890 size 0xc8 virtual false final false
 void LazyInit() ;

/// @brief Method OnDestroy addr 0x1f90aa4 size 0xac virtual false final false
 void OnDestroy() ;

/// @brief Method OnPreRender addr 0x1f90b50 size 0x24c virtual false final false
 void OnPreRender() ;

/// @brief Method OnPostRender addr 0x1f91c98 size 0x94 virtual false final false
 void OnPostRender() ;

/// @brief Method SetMode addr 0x1f91d48 size 0x8 virtual false final false
 void SetMode(GlobalNamespace::GlobalNamespace__BloomPrePass__Mode mode) ;

// Ctor Parameters []
explicit BloomPrePass() ;

/// @brief Method .ctor addr 0x1f91d50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePass__Mode, "", "BloomPrePass/Mode");
NEED_NO_BOX(GlobalNamespace::BloomPrePass);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePass, "", "BloomPrePass");
