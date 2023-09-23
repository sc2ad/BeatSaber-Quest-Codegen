#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Tweening/zzzz__TweeningManager_def.hpp"
#include <cmath>
// Forward declare root types
namespace Tweening {
class TimeTweeningManager;
}
// Type: Tweening::TimeTweeningManager
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15938))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15935))
// CS Name: Tweening.TimeTweeningManager
class CORDL_TYPE TimeTweeningManager : public Tweening::TweeningManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TimeTweeningManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeTweeningManager", modifiers: " const&", def_value: None }]
constexpr TimeTweeningManager(TimeTweeningManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeTweeningManager", modifiers: "&&", def_value: None }]
constexpr TimeTweeningManager(TimeTweeningManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeTweeningManager(void* ptr) noexcept : Tweening::TweeningManager(ptr) {
}


  constexpr TimeTweeningManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeTweeningManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeTweeningManager& operator=(TimeTweeningManager&& o) noexcept = default;
  constexpr TimeTweeningManager& operator=(TimeTweeningManager const& o) noexcept = default;
                


// Methods

/// @brief Method GetTime addr 0x287a824 size 0x8 virtual true final false
 float_t GetTime() ;

// Ctor Parameters []
explicit TimeTweeningManager() ;

/// @brief Method .ctor addr 0x287a82c size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
NEED_NO_BOX(Tweening::TimeTweeningManager);
DEFINE_IL2CPP_ARG_TYPE(Tweening::TimeTweeningManager, "Tweening", "TimeTweeningManager");
