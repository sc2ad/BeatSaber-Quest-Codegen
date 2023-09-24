#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__BestFitAllocator__Block;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__BestFitAllocator__Block;
}
namespace UnityEngine::UIElements::UIR {
class UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool;
}
// Type: ::Block
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7499)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 3839 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7535))
// CS Name: UnityEngine.UIElements.UIR.BestFitAllocator::Block
class CORDL_TYPE UnityEngine__UIElements__UIR__BestFitAllocator__Block : public UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UnityEngine__UIElements__UIR__BestFitAllocator__Block() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__BestFitAllocator__Block", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__BestFitAllocator__Block(UnityEngine__UIElements__UIR__BestFitAllocator__Block const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__BestFitAllocator__Block", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__BestFitAllocator__Block(UnityEngine__UIElements__UIR__BestFitAllocator__Block&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__BestFitAllocator__Block(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block>(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__BestFitAllocator__Block& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__BestFitAllocator__Block& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__BestFitAllocator__Block& operator=(UnityEngine__UIElements__UIR__BestFitAllocator__Block&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__BestFitAllocator__Block& operator=(UnityEngine__UIElements__UIR__BestFitAllocator__Block const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_start, put=__set_start))  start;

constexpr void __set_start(uint32_t value) ;

constexpr uint32_t __get_start() const;

 uint32_t __declspec(property(get=__get_end, put=__set_end))  end;

constexpr void __set_end(uint32_t value) ;

constexpr uint32_t __get_end() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __get_prev() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __get_next() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __declspec(property(get=__get_prevAvailable, put=__set_prevAvailable))  prevAvailable;

constexpr void __set_prevAvailable(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __get_prevAvailable() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __declspec(property(get=__get_nextAvailable, put=__set_nextAvailable))  nextAvailable;

constexpr void __set_nextAvailable(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __get_nextAvailable() const;

 bool __declspec(property(get=__get_allocated, put=__set_allocated))  allocated;

constexpr void __set_allocated(bool value) ;

constexpr bool __get_allocated() const;


// Properties

 uint32_t __declspec(property(get=get_size))  size;


// Methods

/// @brief Method get_size addr 0x2c5c4a4 size 0xc virtual false final false
 uint32_t get_size() ;

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block New_ctor() ;

/// @brief Method .ctor addr 0x2c5c6fc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::BlockPool
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7535)), TypeDefinitionIndex(TypeDefinitionIndex(7500)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7500), inst: 3839 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7534))
// CS Name: UnityEngine.UIElements.UIR.BestFitAllocator::BlockPool
class CORDL_TYPE UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool : public UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool(UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool(UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPool_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block>(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool& operator=(UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool& operator=(UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool const& o) noexcept = default;
                


// Methods

/// @brief Method CreateBlock addr 0x2c5c6a4 size 0x58 virtual false final false
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block CreateBlock() ;

/// @brief Method ResetBlock addr 0x2c5c744 size 0x4 virtual false final false
static void ResetBlock(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block block) ;

static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool New_ctor() ;

/// @brief Method .ctor addr 0x2c5c36c size 0xf0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::BestFitAllocator
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7536))
// CS Name: UnityEngine.UIElements.UIR.BestFitAllocator
class CORDL_TYPE BestFitAllocator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Block = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block;

using BlockPool = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BestFitAllocator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator", modifiers: " const&", def_value: None }]
constexpr BestFitAllocator(BestFitAllocator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BestFitAllocator", modifiers: "&&", def_value: None }]
constexpr BestFitAllocator(BestFitAllocator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BestFitAllocator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BestFitAllocator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BestFitAllocator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BestFitAllocator& operator=(BestFitAllocator&& o) noexcept = default;
  constexpr BestFitAllocator& operator=(BestFitAllocator const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__totalSize_k__BackingField, put=__set__totalSize_k__BackingField))  _totalSize_k__BackingField;

constexpr void __set__totalSize_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__totalSize_k__BackingField() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __declspec(property(get=__get_m_FirstBlock, put=__set_m_FirstBlock))  m_FirstBlock;

constexpr void __set_m_FirstBlock(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __get_m_FirstBlock() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __declspec(property(get=__get_m_FirstAvailableBlock, put=__set_m_FirstAvailableBlock))  m_FirstAvailableBlock;

constexpr void __set_m_FirstAvailableBlock(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block __get_m_FirstAvailableBlock() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool __declspec(property(get=__get_m_BlockPool, put=__set_m_BlockPool))  m_BlockPool;

constexpr void __set_m_BlockPool(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool __get_m_BlockPool() const;

 uint32_t __declspec(property(get=__get_m_HighWatermark, put=__set_m_HighWatermark))  m_HighWatermark;

constexpr void __set_m_HighWatermark(uint32_t value) ;

constexpr uint32_t __get_m_HighWatermark() const;


// Properties

 uint32_t __declspec(property(get=get_totalSize))  totalSize;

 uint32_t __declspec(property(get=get_highWatermark))  highWatermark;


// Methods

static UnityEngine::UIElements::UIR::BestFitAllocator New_ctor(uint32_t size) ;

/// @brief Method .ctor addr 0x2c53438 size 0xa8 virtual false final false
 void _ctor(uint32_t size) ;

/// @brief Method get_totalSize addr 0x2c5c45c size 0x8 virtual false final false
 uint32_t get_totalSize() ;

/// @brief Method get_highWatermark addr 0x2c5394c size 0x8 virtual false final false
 uint32_t get_highWatermark() ;

/// @brief Method Allocate addr 0x2c53200 size 0x194 virtual false final false
 UnityEngine::UIElements::UIR::Alloc Allocate(uint32_t size) ;

/// @brief Method Free addr 0x2c536f0 size 0x25c virtual false final false
 void Free(UnityEngine::UIElements::UIR::Alloc alloc) ;

/// @brief Method CoalesceBlockWithPrevious addr 0x2c5c59c size 0x108 virtual false final false
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block CoalesceBlockWithPrevious(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block block) ;

/// @brief Method BestFitFindAvailableBlock addr 0x2c5c464 size 0x40 virtual false final false
 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block BestFitFindAvailableBlock(uint32_t size) ;

/// @brief Method SplitBlock addr 0x2c5c4b0 size 0xec virtual false final false
 void SplitBlock(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block block, uint32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::BestFitAllocator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::BestFitAllocator, "UnityEngine.UIElements.UIR", "BestFitAllocator");
NEED_NO_BOX(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__Block, "UnityEngine.UIElements.UIR", "BestFitAllocator/Block");
NEED_NO_BOX(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BestFitAllocator__BlockPool, "UnityEngine.UIElements.UIR", "BestFitAllocator/BlockPool");
