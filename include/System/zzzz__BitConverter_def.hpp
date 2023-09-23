#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
// Forward declare root types
namespace System {
class BitConverter;
}
namespace System {
class System__BitConverter____c;
}
// Type: ::<>c
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2357))
// CS Name: System.BitConverter::<>c
class CORDL_TYPE System__BitConverter____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__BitConverter____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__BitConverter____c", modifiers: " const&", def_value: None }]
constexpr System__BitConverter____c(System__BitConverter____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__BitConverter____c", modifiers: "&&", def_value: None }]
constexpr System__BitConverter____c(System__BitConverter____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__BitConverter____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__BitConverter____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__BitConverter____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__BitConverter____c& operator=(System__BitConverter____c&& o) noexcept = default;
  constexpr System__BitConverter____c& operator=(System__BitConverter____c const& o) noexcept = default;
                


// Fields

static System::System__BitConverter____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::System__BitConverter____c value) ;

static System::System__BitConverter____c __get___9() ;

static System::Buffers::SpanAction_2<char16_t,System::ValueTuple_3<::ArrayW<uint8_t>,int32_t,int32_t>> __declspec(property(get=__get___9__38_0, put=__set___9__38_0))  __9__38_0;

static void __set___9__38_0(System::Buffers::SpanAction_2<char16_t,System::ValueTuple_3<::ArrayW<uint8_t>,int32_t,int32_t>> value) ;

static System::Buffers::SpanAction_2<char16_t,System::ValueTuple_3<::ArrayW<uint8_t>,int32_t,int32_t>> __get___9__38_0() ;


// Methods

// Ctor Parameters []
explicit System__BitConverter____c() ;

/// @brief Method .ctor addr 0x23b5978 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToString>b__38_0 addr 0x23b5980 size 0x194 virtual false final false
 void _ToString_b__38_0(System::Span_1<char16_t> dst, System::ValueTuple_3<::ArrayW<uint8_t>,int32_t,int32_t> state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::BitConverter
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2358))
// CS Name: System.BitConverter
class CORDL_TYPE BitConverter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = System::System__BitConverter____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BitConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BitConverter", modifiers: " const&", def_value: None }]
constexpr BitConverter(BitConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BitConverter", modifiers: "&&", def_value: None }]
constexpr BitConverter(BitConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BitConverter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BitConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BitConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BitConverter& operator=(BitConverter&& o) noexcept = default;
  constexpr BitConverter& operator=(BitConverter const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_IsLittleEndian, put=__set_IsLittleEndian))  IsLittleEndian;

static void __set_IsLittleEndian(bool value) ;

static bool __get_IsLittleEndian() ;


// Methods

/// @brief Method GetBytes addr 0x23b4f48 size 0x64 virtual false final false
static ::ArrayW<uint8_t> GetBytes(int32_t value) ;

/// @brief Method GetBytes addr 0x23b4fac size 0x64 virtual false final false
static ::ArrayW<uint8_t> GetBytes(uint16_t value) ;

/// @brief Method GetBytes addr 0x23b5010 size 0x64 virtual false final false
static ::ArrayW<uint8_t> GetBytes(uint32_t value) ;

/// @brief Method TryWriteBytes addr 0x23b5074 size 0x84 virtual false final false
static bool TryWriteBytes(System::Span_1<uint8_t> destination, uint32_t value) ;

/// @brief Method GetBytes addr 0x23b50f8 size 0x6c virtual false final false
static ::ArrayW<uint8_t> GetBytes(float_t value) ;

/// @brief Method ToChar addr 0x23b5164 size 0x64 virtual false final false
static char16_t ToChar(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToInt16 addr 0x23b51c8 size 0x84 virtual false final false
static int16_t ToInt16(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToInt32 addr 0x23b524c size 0x84 virtual false final false
static int32_t ToInt32(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToInt64 addr 0x23b52d0 size 0x84 virtual false final false
static int64_t ToInt64(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToUInt16 addr 0x23b5354 size 0x64 virtual false final false
static uint16_t ToUInt16(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToUInt32 addr 0x23b53b8 size 0x64 virtual false final false
static uint32_t ToUInt32(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToUInt64 addr 0x23b541c size 0x64 virtual false final false
static uint64_t ToUInt64(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToSingle addr 0x23b5480 size 0x6c virtual false final false
static float_t ToSingle(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToDouble addr 0x23b54ec size 0x6c virtual false final false
static double_t ToDouble(::ArrayW<uint8_t> value, int32_t startIndex) ;

/// @brief Method ToString addr 0x23b5558 size 0x2e0 virtual false final false
static ::StringW ToString(::ArrayW<uint8_t> value, int32_t startIndex, int32_t length) ;

/// @brief Method ToString addr 0x23b5838 size 0x70 virtual false final false
static ::StringW ToString(::ArrayW<uint8_t> value) ;

/// @brief Method DoubleToInt64Bits addr 0x23b58a8 size 0x8 virtual false final false
static int64_t DoubleToInt64Bits(double_t value) ;

/// @brief Method Int64BitsToDouble addr 0x23b58b0 size 0x8 virtual false final false
static double_t Int64BitsToDouble(int64_t value) ;

/// @brief Method SingleToInt32Bits addr 0x23b58b8 size 0x8 virtual false final false
static int32_t SingleToInt32Bits(float_t value) ;

/// @brief Method Int32BitsToSingle addr 0x23b58c0 size 0x8 virtual false final false
static float_t Int32BitsToSingle(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::BitConverter);
DEFINE_IL2CPP_ARG_TYPE(System::BitConverter, "System", "BitConverter");
NEED_NO_BOX(System::System__BitConverter____c);
DEFINE_IL2CPP_ARG_TYPE(System::System__BitConverter____c, "System", "BitConverter/<>c");
