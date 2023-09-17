#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultySerializedMethods;
}
// Type: ::BeatmapDifficultySerializedMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14903))
// CS Name: BeatmapDifficultySerializedMethods
class CORDL_TYPE BeatmapDifficultySerializedMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BeatmapDifficultySerializedMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySerializedMethods", modifiers: " const&", def_value: None }]
constexpr BeatmapDifficultySerializedMethods(BeatmapDifficultySerializedMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySerializedMethods", modifiers: "&&", def_value: None }]
constexpr BeatmapDifficultySerializedMethods(BeatmapDifficultySerializedMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDifficultySerializedMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapDifficultySerializedMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDifficultySerializedMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDifficultySerializedMethods& operator=(BeatmapDifficultySerializedMethods&& o) noexcept = default;
  constexpr BeatmapDifficultySerializedMethods& operator=(BeatmapDifficultySerializedMethods const& o) noexcept = default;
                


// Fields

/// @brief Field kDifficultyEasySerializedName offset 0
static constexpr ::ConstString  kDifficultyEasySerializedName{u"Easy"};

/// @brief Field kDifficultyNormalSerializedName offset 0
static constexpr ::ConstString  kDifficultyNormalSerializedName{u"Normal"};

/// @brief Field kDifficultyHardSerializedName offset 0
static constexpr ::ConstString  kDifficultyHardSerializedName{u"Hard"};

/// @brief Field kDifficultyExpertSerializedName offset 0
static constexpr ::ConstString  kDifficultyExpertSerializedName{u"Expert"};

/// @brief Field kDifficultyExpertPlusNameSerializedLegacy offset 0
static constexpr ::ConstString  kDifficultyExpertPlusNameSerializedLegacy{u"Expert+"};

/// @brief Field kDifficultyExpertPlusSerializedName offset 0
static constexpr ::ConstString  kDifficultyExpertPlusSerializedName{u"ExpertPlus"};

/// @brief Field kDifficultyUnknownSerializedName offset 0
static constexpr ::ConstString  kDifficultyUnknownSerializedName{u"Unknown"};


// Methods

/// @brief Method SerializedName addr 0xd90f50 size 0xa4 virtual false final false
static ::StringW SerializedName(::GlobalNamespace::BeatmapDifficulty difficulty) ;

/// @brief Method BeatmapDifficultyFromSerializedName addr 0xd90ff4 size 0x164 virtual false final false
static bool BeatmapDifficultyFromSerializedName(::StringW name, ByRef<::GlobalNamespace::BeatmapDifficulty> difficulty) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultySerializedMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultySerializedMethods, "", "BeatmapDifficultySerializedMethods");
