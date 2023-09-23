#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TextureSlotManager;
}
// Type: UnityEngine.UIElements.UIR::TextureSlotManager
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7508))
// CS Name: UnityEngine.UIElements.UIR.TextureSlotManager
class CORDL_TYPE TextureSlotManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TextureSlotManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextureSlotManager", modifiers: " const&", def_value: None }]
constexpr TextureSlotManager(TextureSlotManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextureSlotManager", modifiers: "&&", def_value: None }]
constexpr TextureSlotManager(TextureSlotManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextureSlotManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextureSlotManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextureSlotManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextureSlotManager& operator=(TextureSlotManager&& o) noexcept = default;
  constexpr TextureSlotManager& operator=(TextureSlotManager const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_k_SlotCount, put=__set_k_SlotCount))  k_SlotCount;

static void __set_k_SlotCount(int32_t value) ;

static int32_t __get_k_SlotCount() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_slotIds, put=__set_slotIds))  slotIds;

static void __set_slotIds(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_slotIds() ;

static int32_t __declspec(property(get=__get_textureTableId, put=__set_textureTableId))  textureTableId;

static void __set_textureTableId(int32_t value) ;

static int32_t __get_textureTableId() ;

 ::ArrayW<UnityEngine::UIElements::TextureId> __declspec(property(get=__get_m_Textures, put=__set_m_Textures))  m_Textures;

constexpr void __set_m_Textures(::ArrayW<UnityEngine::UIElements::TextureId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::TextureId> __get_m_Textures() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_Tickets, put=__set_m_Tickets))  m_Tickets;

constexpr void __set_m_Tickets(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_Tickets() const;

 int32_t __declspec(property(get=__get_m_CurrentTicket, put=__set_m_CurrentTicket))  m_CurrentTicket;

constexpr void __set_m_CurrentTicket(int32_t value) ;

constexpr int32_t __get_m_CurrentTicket() const;

 int32_t __declspec(property(get=__get_m_FirstUsedTicket, put=__set_m_FirstUsedTicket))  m_FirstUsedTicket;

constexpr void __set_m_FirstUsedTicket(int32_t value) ;

constexpr int32_t __get_m_FirstUsedTicket() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get_m_GpuTextures, put=__set_m_GpuTextures))  m_GpuTextures;

constexpr void __set_m_GpuTextures(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get_m_GpuTextures() const;

 int32_t __declspec(property(get=__get__FreeSlots_k__BackingField, put=__set__FreeSlots_k__BackingField))  _FreeSlots_k__BackingField;

constexpr void __set__FreeSlots_k__BackingField(int32_t value) ;

constexpr int32_t __get__FreeSlots_k__BackingField() const;

 UnityEngine::UIElements::TextureRegistry __declspec(property(get=__get_textureRegistry, put=__set_textureRegistry))  textureRegistry;

constexpr void __set_textureRegistry(UnityEngine::UIElements::TextureRegistry value) ;

constexpr UnityEngine::UIElements::TextureRegistry __get_textureRegistry() const;


// Properties

 int32_t __declspec(property(get=get_FreeSlots, put=set_FreeSlots))  FreeSlots;


// Methods

// Ctor Parameters []
explicit TextureSlotManager() ;

/// @brief Method .ctor addr 0x2d22e40 size 0x168 virtual false final false
 void _ctor() ;

/// @brief Method Reset addr 0x2d22fa8 size 0x12c virtual false final false
 void Reset() ;

/// @brief Method StartNewBatch addr 0x2d230d4 size 0x6c virtual false final false
 void StartNewBatch() ;

/// @brief Method IndexOf addr 0x2d23140 size 0xd4 virtual false final false
 int32_t IndexOf(UnityEngine::UIElements::TextureId id) ;

/// @brief Method MarkUsed addr 0x2d23214 size 0x58 virtual false final false
 void MarkUsed(int32_t slotIndex) ;

/// @brief Method get_FreeSlots addr 0x2d2326c size 0x8 virtual false final false
 int32_t get_FreeSlots() ;

/// @brief Method set_FreeSlots addr 0x2d23274 size 0x8 virtual false final false
 void set_FreeSlots(int32_t value) ;

/// @brief Method FindOldestSlot addr 0x2d2327c size 0xd0 virtual false final false
 int32_t FindOldestSlot() ;

/// @brief Method Bind addr 0x2d2334c size 0x218 virtual false final false
 void Bind(UnityEngine::UIElements::TextureId id, int32_t slot, UnityEngine::MaterialPropertyBlock mat) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::TextureSlotManager);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::TextureSlotManager, "UnityEngine.UIElements.UIR", "TextureSlotManager");
