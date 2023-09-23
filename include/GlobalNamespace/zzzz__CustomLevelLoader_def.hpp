#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentsListSO;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomLevelLoader;
}
// Type: ::CustomLevelLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4176))
// CS Name: CustomLevelLoader
class CORDL_TYPE CustomLevelLoader : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CustomLevelLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: " const&", def_value: None }]
constexpr CustomLevelLoader(CustomLevelLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomLevelLoader", modifiers: "&&", def_value: None }]
constexpr CustomLevelLoader(CustomLevelLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomLevelLoader(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CustomLevelLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomLevelLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomLevelLoader& operator=(CustomLevelLoader&& o) noexcept = default;
  constexpr CustomLevelLoader& operator=(CustomLevelLoader const& o) noexcept = default;
                


// Fields

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__defaultEnvironmentInfo, put=__set__defaultEnvironmentInfo))  _defaultEnvironmentInfo;

constexpr void __set__defaultEnvironmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__defaultEnvironmentInfo() const;

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__defaultAllDirectionsEnvironmentInfo, put=__set__defaultAllDirectionsEnvironmentInfo))  _defaultAllDirectionsEnvironmentInfo;

constexpr void __set__defaultAllDirectionsEnvironmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__defaultAllDirectionsEnvironmentInfo() const;

 GlobalNamespace::EnvironmentsListSO __declspec(property(get=__get__environmentSceneInfoCollection, put=__set__environmentSceneInfoCollection))  _environmentSceneInfoCollection;

constexpr void __set__environmentSceneInfoCollection(GlobalNamespace::EnvironmentsListSO value) ;

constexpr GlobalNamespace::EnvironmentsListSO __get__environmentSceneInfoCollection() const;

 UnityEngine::Sprite __declspec(property(get=__get__defaultPackCover, put=__set__defaultPackCover))  _defaultPackCover;

constexpr void __set__defaultPackCover(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__defaultPackCover() const;

 UnityEngine::Sprite __declspec(property(get=__get__smallDefaultPackCover, put=__set__smallDefaultPackCover))  _smallDefaultPackCover;

constexpr void __set__smallDefaultPackCover(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__smallDefaultPackCover() const;


// Methods

// Ctor Parameters []
explicit CustomLevelLoader() ;

/// @brief Method .ctor addr 0x21bbbf4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CustomLevelLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomLevelLoader, "", "CustomLevelLoader");
