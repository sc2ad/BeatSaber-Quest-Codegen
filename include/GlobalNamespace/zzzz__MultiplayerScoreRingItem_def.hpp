#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreItem_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreRingItem__Pool;
}
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
// Type: ::MultiplayerScoreRingItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5337))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5343))
// CS Name: MultiplayerScoreRingItem
class CORDL_TYPE MultiplayerScoreRingItem : public GlobalNamespace::MultiplayerScoreItem {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerScoreRingItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingItem", modifiers: " const&", def_value: None }]
constexpr MultiplayerScoreRingItem(MultiplayerScoreRingItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingItem", modifiers: "&&", def_value: None }]
constexpr MultiplayerScoreRingItem(MultiplayerScoreRingItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerScoreRingItem(void* ptr) noexcept : GlobalNamespace::MultiplayerScoreItem(ptr) {
}


  constexpr MultiplayerScoreRingItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerScoreRingItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerScoreRingItem& operator=(MultiplayerScoreRingItem&& o) noexcept = default;
  constexpr MultiplayerScoreRingItem& operator=(MultiplayerScoreRingItem const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MultiplayerScoreRingItem() ;

/// @brief Method .ctor addr 0x2102988 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(5343)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2718 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5342))
// CS Name: MultiplayerScoreRingItem::Pool
class CORDL_TYPE GlobalNamespace__MultiplayerScoreRingItem__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::MultiplayerScoreRingItem> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__MultiplayerScoreRingItem__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerScoreRingItem__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreRingItem__Pool(GlobalNamespace__MultiplayerScoreRingItem__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerScoreRingItem__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerScoreRingItem__Pool(GlobalNamespace__MultiplayerScoreRingItem__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerScoreRingItem__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::MultiplayerScoreRingItem>(ptr) {
}


  constexpr GlobalNamespace__MultiplayerScoreRingItem__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerScoreRingItem__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerScoreRingItem__Pool& operator=(GlobalNamespace__MultiplayerScoreRingItem__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerScoreRingItem__Pool& operator=(GlobalNamespace__MultiplayerScoreRingItem__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerScoreRingItem__Pool() ;

/// @brief Method .ctor addr 0x2102990 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool, "", "MultiplayerScoreRingItem/Pool");
NEED_NO_BOX(GlobalNamespace::MultiplayerScoreRingItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreRingItem, "", "MultiplayerScoreRingItem");
