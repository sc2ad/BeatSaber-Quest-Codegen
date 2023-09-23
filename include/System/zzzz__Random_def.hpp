#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace System {
class Random;
}
// Type: System::Random
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2460))
// CS Name: System.Random
class CORDL_TYPE Random : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Random() = default;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: " const&", def_value: None }]
constexpr Random(Random const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
constexpr Random(Random&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Random(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Random& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Random& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Random& operator=(Random&& o) noexcept = default;
  constexpr Random& operator=(Random const& o) noexcept = default;
                


// Fields

/// @brief Field MBIG offset 0
static constexpr int32_t  MBIG{2147483647};

/// @brief Field MSEED offset 0
static constexpr int32_t  MSEED{161803398};

/// @brief Field MZ offset 0
static constexpr int32_t  MZ{0};

 int32_t __declspec(property(get=__get__inext, put=__set__inext))  _inext;

constexpr void __set__inext(int32_t value) ;

constexpr int32_t __get__inext() const;

 int32_t __declspec(property(get=__get__inextp, put=__set__inextp))  _inextp;

constexpr void __set__inextp(int32_t value) ;

constexpr int32_t __get__inextp() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__seedArray, put=__set__seedArray))  _seedArray;

constexpr void __set__seedArray(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__seedArray() const;

static System::Random __declspec(property(get=__get_t_threadRandom, put=__set_t_threadRandom))  t_threadRandom;

static void __set_t_threadRandom(System::Random value) ;

static System::Random __get_t_threadRandom() ;

static System::Random __declspec(property(get=__get_s_globalRandom, put=__set_s_globalRandom))  s_globalRandom;

static void __set_s_globalRandom(System::Random value) ;

static System::Random __get_s_globalRandom() ;


// Methods

// Ctor Parameters []
explicit Random() ;

/// @brief Method .ctor addr 0x2451640 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "Seed", ty: "int32_t", modifiers: "", def_value: None }]
explicit Random(int32_t Seed) ;

/// @brief Method .ctor addr 0x245185c size 0x1b0 virtual false final false
 void _ctor(int32_t Seed) ;

/// @brief Method Sample addr 0x2451a0c size 0x20 virtual true final false
 double_t Sample() ;

/// @brief Method InternalSample addr 0x2451a2c size 0x90 virtual false final false
 int32_t InternalSample() ;

/// @brief Method GenerateSeed addr 0x245169c size 0x1c0 virtual false final false
static int32_t GenerateSeed() ;

/// @brief Method GenerateGlobalSeed addr 0x2451abc size 0x24 virtual false final false
static int32_t GenerateGlobalSeed() ;

/// @brief Method Next addr 0x2451ae0 size 0x4 virtual true final false
 int32_t Next() ;

/// @brief Method GetSampleForLargeRange addr 0x2451ae4 size 0x4c virtual false final false
 double_t GetSampleForLargeRange() ;

/// @brief Method Next addr 0x2451b30 size 0x11c virtual true final false
 int32_t Next(int32_t minValue, int32_t maxValue) ;

/// @brief Method Next addr 0x2451c4c size 0xc8 virtual true final false
 int32_t Next(int32_t maxValue) ;

/// @brief Method NextDouble addr 0x2451d14 size 0xc virtual true final false
 double_t NextDouble() ;

/// @brief Method NextBytes addr 0x2451d20 size 0xb0 virtual true final false
 void NextBytes(::ArrayW<uint8_t> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Random);
DEFINE_IL2CPP_ARG_TYPE(System::Random, "System", "Random");
