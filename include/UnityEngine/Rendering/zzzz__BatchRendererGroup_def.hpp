#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine::Rendering {
struct BatchRendererCullingOutput;
}
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine::Rendering {
class UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
class UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling;
}
// Type: ::OnPerformCulling
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10303))
// CS Name: UnityEngine.Rendering.BatchRendererGroup::OnPerformCulling
class CORDL_TYPE UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling(UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling(UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling& operator=(UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling&& o) noexcept = default;
  constexpr UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling& operator=(UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling const& o) noexcept = default;
                


// Methods

static UnityEngine::Rendering::UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b76ccc size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b76dfc size 0x5c virtual true final false
 Unity::Jobs::JobHandle Invoke(UnityEngine::Rendering::BatchRendererGroup rendererGroup, UnityEngine::Rendering::BatchCullingContext cullingContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
// Type: UnityEngine.Rendering::BatchRendererGroup
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10304))
// CS Name: UnityEngine.Rendering.BatchRendererGroup
class CORDL_TYPE BatchRendererGroup : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OnPerformCulling = UnityEngine::Rendering::UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BatchRendererGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup", modifiers: " const&", def_value: None }]
constexpr BatchRendererGroup(BatchRendererGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup", modifiers: "&&", def_value: None }]
constexpr BatchRendererGroup(BatchRendererGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BatchRendererGroup(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BatchRendererGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BatchRendererGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BatchRendererGroup& operator=(BatchRendererGroup&& o) noexcept = default;
  constexpr BatchRendererGroup& operator=(BatchRendererGroup const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_GroupHandle, put=__set_m_GroupHandle))  m_GroupHandle;

constexpr void __set_m_GroupHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_GroupHandle() const;

 UnityEngine::Rendering::UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling __declspec(property(get=__get_m_PerformCulling, put=__set_m_PerformCulling))  m_PerformCulling;

constexpr void __set_m_PerformCulling(UnityEngine::Rendering::UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling value) ;

constexpr UnityEngine::Rendering::UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling __get_m_PerformCulling() const;


// Methods

/// @brief Method InvokeOnPerformCulling addr 0x2b76aac size 0x220 virtual false final false
static void InvokeOnPerformCulling(UnityEngine::Rendering::BatchRendererGroup group, ByRef<UnityEngine::Rendering::BatchRendererCullingOutput> context, ByRef<UnityEngine::Rendering::LODParameters> lodParameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(UnityEngine::Rendering::BatchRendererGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchRendererGroup, "UnityEngine.Rendering", "BatchRendererGroup");
NEED_NO_BOX(UnityEngine::Rendering::UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::UnityEngine__Rendering__BatchRendererGroup__OnPerformCulling, "UnityEngine.Rendering", "BatchRendererGroup/OnPerformCulling");
