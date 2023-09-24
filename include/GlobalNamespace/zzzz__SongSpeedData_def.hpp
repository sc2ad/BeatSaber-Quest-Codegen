#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class SongSpeedData;
}
// Type: ::SongSpeedData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4212))
// CS Name: SongSpeedData
class CORDL_TYPE SongSpeedData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SongSpeedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongSpeedData", modifiers: " const&", def_value: None }]
constexpr SongSpeedData(SongSpeedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongSpeedData", modifiers: "&&", def_value: None }]
constexpr SongSpeedData(SongSpeedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongSpeedData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SongSpeedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongSpeedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongSpeedData& operator=(SongSpeedData&& o) noexcept = default;
  constexpr SongSpeedData& operator=(SongSpeedData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_speedMul, put=__set_speedMul))  speedMul;

constexpr void __set_speedMul(float_t value) ;

constexpr float_t __get_speedMul() const;


// Methods

static GlobalNamespace::SongSpeedData New_ctor(float_t speedMul) ;

/// @brief Method .ctor addr 0x21bf7b8 size 0x28 virtual false final false
 void _ctor(float_t speedMul) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SongSpeedData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongSpeedData, "", "SongSpeedData");
