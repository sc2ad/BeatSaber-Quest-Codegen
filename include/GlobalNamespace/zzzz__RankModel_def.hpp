#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__RankModel__Rank;
}
namespace GlobalNamespace {
class RankModel;
}
// Type: ::Rank
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15123))
// CS Name: RankModel::Rank
struct CORDL_TYPE ____GlobalNamespace__RankModel__Rank : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__RankModel__Rank(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__RankModel__Rank(____GlobalNamespace__RankModel__Rank const&) = default;
                    constexpr ____GlobalNamespace__RankModel__Rank(____GlobalNamespace__RankModel__Rank&&) = default;
                    constexpr ____GlobalNamespace__RankModel__Rank& operator=(____GlobalNamespace__RankModel__Rank const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__RankModel__Rank& operator=(____GlobalNamespace__RankModel__Rank&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__RankModel__Rank(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__RankModel__Rank_Unwrapped : int32_t {
__E = 0,
__D = 1,
__C = 2,
__B = 3,
__A = 4,
__S = 5,
__SS = 6,
__SSS = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__RankModel__Rank_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__RankModel__Rank_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field E offset 0
static ::GlobalNamespace::____GlobalNamespace__RankModel__Rank const E;

/// @brief Field D offset 0
static ::GlobalNamespace::____GlobalNamespace__RankModel__Rank const D;

/// @brief Field C offset 0
static ::GlobalNamespace::____GlobalNamespace__RankModel__Rank const C;

/// @brief Field B offset 0
static ::GlobalNamespace::____GlobalNamespace__RankModel__Rank const B;

/// @brief Field A offset 0
static ::GlobalNamespace::____GlobalNamespace__RankModel__Rank const A;

/// @brief Field S offset 0
static ::GlobalNamespace::____GlobalNamespace__RankModel__Rank const S;

/// @brief Field SS offset 0
static ::GlobalNamespace::____GlobalNamespace__RankModel__Rank const SS;

/// @brief Field SSS offset 0
static ::GlobalNamespace::____GlobalNamespace__RankModel__Rank const SSS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RankModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15124))
// CS Name: RankModel
class CORDL_TYPE RankModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Rank = ::GlobalNamespace::____GlobalNamespace__RankModel__Rank;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RankModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "RankModel", modifiers: " const&", def_value: None }]
constexpr RankModel(RankModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RankModel", modifiers: "&&", def_value: None }]
constexpr RankModel(RankModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RankModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RankModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RankModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RankModel& operator=(RankModel&& o) noexcept = default;
  constexpr RankModel& operator=(RankModel const& o) noexcept = default;
                


// Methods

/// @brief Method GetRankName addr 0x1219530 size 0xbc virtual false final false
static ::StringW GetRankName(::GlobalNamespace::____GlobalNamespace__RankModel__Rank rank) ;

/// @brief Method GetRankForScore addr 0x12195ec size 0xc8 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__RankModel__Rank GetRankForScore(int32_t multipliedScore, int32_t modifiedScore, int32_t maxMultipliedScore, int32_t maxModifiedScore) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__RankModel__Rank, "", "RankModel/Rank");
NEED_NO_BOX(::GlobalNamespace::RankModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RankModel, "", "RankModel");
