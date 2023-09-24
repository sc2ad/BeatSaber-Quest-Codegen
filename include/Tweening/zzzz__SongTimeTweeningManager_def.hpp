#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Tweening/zzzz__TweeningManager_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace Tweening {
class SongTimeTweeningManager;
}
// Type: Tweening::SongTimeTweeningManager
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15938))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6147))
// CS Name: Tweening.SongTimeTweeningManager
class CORDL_TYPE SongTimeTweeningManager : public Tweening::TweeningManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SongTimeTweeningManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeTweeningManager", modifiers: " const&", def_value: None }]
constexpr SongTimeTweeningManager(SongTimeTweeningManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeTweeningManager", modifiers: "&&", def_value: None }]
constexpr SongTimeTweeningManager(SongTimeTweeningManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongTimeTweeningManager(void* ptr) noexcept : Tweening::TweeningManager(ptr) {
}


  constexpr SongTimeTweeningManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongTimeTweeningManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongTimeTweeningManager& operator=(SongTimeTweeningManager&& o) noexcept = default;
  constexpr SongTimeTweeningManager& operator=(SongTimeTweeningManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;


// Methods

/// @brief Method GetTime addr 0x21d5600 size 0xa0 virtual true final false
 float_t GetTime() ;

static Tweening::SongTimeTweeningManager New_ctor() ;

/// @brief Method .ctor addr 0x21d56a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
NEED_NO_BOX(Tweening::SongTimeTweeningManager);
DEFINE_IL2CPP_ARG_TYPE(Tweening::SongTimeTweeningManager, "Tweening", "SongTimeTweeningManager");
