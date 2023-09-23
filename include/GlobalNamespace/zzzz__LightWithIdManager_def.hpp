#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
class ILightWithId;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightWithIdManager;
}
// Type: ::LightWithIdManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14702))
// CS Name: LightWithIdManager
class CORDL_TYPE LightWithIdManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LightWithIdManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightWithIdManager", modifiers: " const&", def_value: None }]
constexpr LightWithIdManager(LightWithIdManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightWithIdManager", modifiers: "&&", def_value: None }]
constexpr LightWithIdManager(LightWithIdManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightWithIdManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightWithIdManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightWithIdManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightWithIdManager& operator=(LightWithIdManager&& o) noexcept = default;
  constexpr LightWithIdManager& operator=(LightWithIdManager const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didChangeSomeColorsThisFrameEvent, put=__set_didChangeSomeColorsThisFrameEvent))  didChangeSomeColorsThisFrameEvent;

constexpr void __set_didChangeSomeColorsThisFrameEvent(System::Action value) ;

constexpr System::Action __get_didChangeSomeColorsThisFrameEvent() const;

/// @brief Field kMaxLightId offset 0
static constexpr int32_t  kMaxLightId{500};

 ::ArrayW<System::Collections::Generic::List_1<GlobalNamespace::ILightWithId>> __declspec(property(get=__get__lights, put=__set__lights))  _lights;

constexpr void __set__lights(::ArrayW<System::Collections::Generic::List_1<GlobalNamespace::ILightWithId>> value) ;

constexpr ::ArrayW<System::Collections::Generic::List_1<GlobalNamespace::ILightWithId>> __get__lights() const;

 ::ArrayW<System::Nullable_1<UnityEngine::Color>> __declspec(property(get=__get__colors, put=__set__colors))  _colors;

constexpr void __set__colors(::ArrayW<System::Nullable_1<UnityEngine::Color>> value) ;

constexpr ::ArrayW<System::Nullable_1<UnityEngine::Color>> __get__colors() const;

 System::Collections::Generic::List_1<GlobalNamespace::ILightWithId> __declspec(property(get=__get__lightsToUnregister, put=__set__lightsToUnregister))  _lightsToUnregister;

constexpr void __set__lightsToUnregister(System::Collections::Generic::List_1<GlobalNamespace::ILightWithId> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::ILightWithId> __get__lightsToUnregister() const;

 bool __declspec(property(get=__get__didChangeSomeColorsThisFrame, put=__set__didChangeSomeColorsThisFrame))  _didChangeSomeColorsThisFrame;

constexpr void __set__didChangeSomeColorsThisFrame(bool value) ;

constexpr bool __get__didChangeSomeColorsThisFrame() const;


// Methods

/// @brief Method add_didChangeSomeColorsThisFrameEvent addr 0x1f9d908 size 0x9c virtual false final false
 void add_didChangeSomeColorsThisFrameEvent(System::Action value) ;

/// @brief Method remove_didChangeSomeColorsThisFrameEvent addr 0x1f9d9a4 size 0x9c virtual false final false
 void remove_didChangeSomeColorsThisFrameEvent(System::Action value) ;

/// @brief Method LateUpdate addr 0x1f9da40 size 0x290 virtual false final false
 void LateUpdate() ;

/// @brief Method RegisterLight addr 0x1f9dcd0 size 0x430 virtual false final false
 void RegisterLight(GlobalNamespace::ILightWithId lightWithId) ;

/// @brief Method UnregisterLight addr 0x1f9e100 size 0x204 virtual false final false
 void UnregisterLight(GlobalNamespace::ILightWithId lightWithId) ;

/// @brief Method SetColorForId addr 0x1f9e304 size 0x23c virtual false final false
 void SetColorForId(int32_t lightId, UnityEngine::Color color) ;

/// @brief Method GetColorForId addr 0x1f9e540 size 0xe4 virtual false final false
 UnityEngine::Color GetColorForId(int32_t lightId, bool initializeIfNull) ;

// Ctor Parameters []
explicit LightWithIdManager() ;

/// @brief Method .ctor addr 0x1f9e624 size 0xd0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightWithIdManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightWithIdManager, "", "LightWithIdManager");
