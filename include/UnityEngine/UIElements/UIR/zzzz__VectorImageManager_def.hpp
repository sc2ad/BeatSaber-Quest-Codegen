#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemapPool;
}
namespace UnityEngine::UIElements::UIR {
class GradientSettingsAtlas;
}
namespace UnityEngine {
class Texture2D;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfo;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfoPool;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class VectorImageManager;
}
// Type: UnityEngine.UIElements.UIR::VectorImageManager
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7523))
// CS Name: UnityEngine.UIElements.UIR.VectorImageManager
class CORDL_TYPE VectorImageManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~VectorImageManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageManager", modifiers: " const&", def_value: None }]
constexpr VectorImageManager(VectorImageManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorImageManager", modifiers: "&&", def_value: None }]
constexpr VectorImageManager(VectorImageManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VectorImageManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VectorImageManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VectorImageManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VectorImageManager& operator=(VectorImageManager&& o) noexcept = default;
  constexpr VectorImageManager& operator=(VectorImageManager const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::VectorImageManager> __declspec(property(get=__get_instances, put=__set_instances))  instances;

static void __set_instances(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::VectorImageManager> value) ;

static System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::VectorImageManager> __get_instances() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerRegister, put=__set_s_MarkerRegister))  s_MarkerRegister;

static void __set_s_MarkerRegister(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerRegister() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerUnregister, put=__set_s_MarkerUnregister))  s_MarkerUnregister;

static void __set_s_MarkerUnregister(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerUnregister() ;

 UnityEngine::UIElements::AtlasBase __declspec(property(get=__get_m_Atlas, put=__set_m_Atlas))  m_Atlas;

constexpr void __set_m_Atlas(UnityEngine::UIElements::AtlasBase value) ;

constexpr UnityEngine::UIElements::AtlasBase __get_m_Atlas() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VectorImage,UnityEngine::UIElements::UIR::VectorImageRenderInfo> __declspec(property(get=__get_m_Registered, put=__set_m_Registered))  m_Registered;

constexpr void __set_m_Registered(System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VectorImage,UnityEngine::UIElements::UIR::VectorImageRenderInfo> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::UIElements::VectorImage,UnityEngine::UIElements::UIR::VectorImageRenderInfo> __get_m_Registered() const;

 UnityEngine::UIElements::UIR::VectorImageRenderInfoPool __declspec(property(get=__get_m_RenderInfoPool, put=__set_m_RenderInfoPool))  m_RenderInfoPool;

constexpr void __set_m_RenderInfoPool(UnityEngine::UIElements::UIR::VectorImageRenderInfoPool value) ;

constexpr UnityEngine::UIElements::UIR::VectorImageRenderInfoPool __get_m_RenderInfoPool() const;

 UnityEngine::UIElements::UIR::GradientRemapPool __declspec(property(get=__get_m_GradientRemapPool, put=__set_m_GradientRemapPool))  m_GradientRemapPool;

constexpr void __set_m_GradientRemapPool(UnityEngine::UIElements::UIR::GradientRemapPool value) ;

constexpr UnityEngine::UIElements::UIR::GradientRemapPool __get_m_GradientRemapPool() const;

 UnityEngine::UIElements::UIR::GradientSettingsAtlas __declspec(property(get=__get_m_GradientSettingsAtlas, put=__set_m_GradientSettingsAtlas))  m_GradientSettingsAtlas;

constexpr void __set_m_GradientSettingsAtlas(UnityEngine::UIElements::UIR::GradientSettingsAtlas value) ;

constexpr UnityEngine::UIElements::UIR::GradientSettingsAtlas __get_m_GradientSettingsAtlas() const;

 bool __declspec(property(get=__get_m_LoggedExhaustedSettingsAtlas, put=__set_m_LoggedExhaustedSettingsAtlas))  m_LoggedExhaustedSettingsAtlas;

constexpr void __set_m_LoggedExhaustedSettingsAtlas(bool value) ;

constexpr bool __get_m_LoggedExhaustedSettingsAtlas() const;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;


// Properties

 UnityEngine::Texture2D __declspec(property(get=get_atlas))  atlas;

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

/// @brief Method get_atlas addr 0x2c54670 size 0x14 virtual false final false
 UnityEngine::Texture2D get_atlas() ;

// Ctor Parameters [CppParam { name: "atlas", ty: "UnityEngine::UIElements::AtlasBase", modifiers: "", def_value: None }]
explicit VectorImageManager(UnityEngine::UIElements::AtlasBase atlas) ;

/// @brief Method .ctor addr 0x2c54684 size 0x1bc virtual false final false
 void _ctor(UnityEngine::UIElements::AtlasBase atlas) ;

/// @brief Method get_disposed addr 0x2c54840 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2c54848 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2c54854 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2c548c0 size 0x118 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Commit addr 0x2c549d8 size 0x30 virtual false final false
 void Commit() ;

/// @brief Method AddUser addr 0x2c54a08 size 0x104 virtual false final false
 UnityEngine::UIElements::UIR::GradientRemap AddUser(UnityEngine::UIElements::VectorImage vi, UnityEngine::UIElements::VisualElement context) ;

/// @brief Method Register addr 0x2c54b0c size 0x434 virtual false final false
 UnityEngine::UIElements::UIR::VectorImageRenderInfo Register(UnityEngine::UIElements::VectorImage vi, UnityEngine::UIElements::VisualElement context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::VectorImageManager);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::VectorImageManager, "UnityEngine.UIElements.UIR", "VectorImageManager");
