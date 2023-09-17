#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::U2D {
class SpriteAtlas;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::U2D {
class SpriteAtlasManager;
}
// Type: UnityEngine.U2D::SpriteAtlasManager
namespace UnityEngine::U2D {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10231))
// CS Name: UnityEngine.U2D.SpriteAtlasManager
class CORDL_TYPE SpriteAtlasManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SpriteAtlasManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteAtlasManager", modifiers: " const&", def_value: None }]
constexpr SpriteAtlasManager(SpriteAtlasManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpriteAtlasManager", modifiers: "&&", def_value: None }]
constexpr SpriteAtlasManager(SpriteAtlasManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpriteAtlasManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SpriteAtlasManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpriteAtlasManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpriteAtlasManager& operator=(SpriteAtlasManager&& o) noexcept = default;
  constexpr SpriteAtlasManager& operator=(SpriteAtlasManager const& o) noexcept = default;
                


// Fields

static ::System::Action_2<::StringW,::System::Action_1<::UnityEngine::U2D::SpriteAtlas>> __declspec(property(get=__get_atlasRequested, put=__set_atlasRequested))  atlasRequested;

static void __set_atlasRequested(::System::Action_2<::StringW,::System::Action_1<::UnityEngine::U2D::SpriteAtlas>> value) ;

static ::System::Action_2<::StringW,::System::Action_1<::UnityEngine::U2D::SpriteAtlas>> __get_atlasRequested() ;

static ::System::Action_1<::UnityEngine::U2D::SpriteAtlas> __declspec(property(get=__get_atlasRegistered, put=__set_atlasRegistered))  atlasRegistered;

static void __set_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas> value) ;

static ::System::Action_1<::UnityEngine::U2D::SpriteAtlas> __get_atlasRegistered() ;


// Methods

/// @brief Method RequestAtlas addr 0x2b6e684 size 0xc0 virtual false final false
static bool RequestAtlas(::StringW tag) ;

/// @brief Method add_atlasRegistered addr 0x2b6e744 size 0xd0 virtual false final false
static void add_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas> value) ;

/// @brief Method remove_atlasRegistered addr 0x2b6e814 size 0xd0 virtual false final false
static void remove_atlasRegistered(::System::Action_1<::UnityEngine::U2D::SpriteAtlas> value) ;

/// @brief Method PostRegisteredAtlas addr 0x2b6e8e4 size 0x6c virtual false final false
static void PostRegisteredAtlas(::UnityEngine::U2D::SpriteAtlas spriteAtlas) ;

/// @brief Method Register addr 0x2b6e950 size 0x3c virtual false final false
static void Register(::UnityEngine::U2D::SpriteAtlas spriteAtlas) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::U2D
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::U2D::SpriteAtlasManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::SpriteAtlasManager, "UnityEngine.U2D", "SpriteAtlasManager");
