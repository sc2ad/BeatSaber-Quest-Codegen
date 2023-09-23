#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Timeline {
class HashUtility;
}
// Type: UnityEngine.Timeline::HashUtility
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14143))
// CS Name: UnityEngine.Timeline.HashUtility
class CORDL_TYPE HashUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HashUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashUtility", modifiers: " const&", def_value: None }]
constexpr HashUtility(HashUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashUtility", modifiers: "&&", def_value: None }]
constexpr HashUtility(HashUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashUtility& operator=(HashUtility&& o) noexcept = default;
  constexpr HashUtility& operator=(HashUtility const& o) noexcept = default;
                


// Methods

/// @brief Method CombineHash addr 0x2ad8270 size 0x1c virtual false final false
static int32_t CombineHash(int32_t h1, int32_t h2) ;

/// @brief Method CombineHash addr 0x2ad828c size 0x2c virtual false final false
static int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3) ;

/// @brief Method CombineHash addr 0x2ad82b8 size 0x3c virtual false final false
static int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4) ;

/// @brief Method CombineHash addr 0x2ad82f4 size 0x4c virtual false final false
static int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5) ;

/// @brief Method CombineHash addr 0x2ad8340 size 0x5c virtual false final false
static int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6) ;

/// @brief Method CombineHash addr 0x2ad839c size 0x2c virtual false final false
static int32_t CombineHash(int32_t h1, int32_t h2, int32_t h3, int32_t h4, int32_t h5, int32_t h6, int32_t h7) ;

/// @brief Method CombineHash addr 0x2ad83c8 size 0x6c virtual false final false
static int32_t CombineHash(::ArrayW<int32_t> hashes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::HashUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::HashUtility, "UnityEngine.Timeline", "HashUtility");
