#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
class SortKey;
}
namespace System::Globalization {
struct CompareOptions;
}
// Forward declare root types
namespace Mono::Globalization::Unicode {
class SortKeyBuffer;
}
// Type: Mono.Globalization.Unicode::SortKeyBuffer
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2272))
// CS Name: Mono.Globalization.Unicode.SortKeyBuffer
class CORDL_TYPE SortKeyBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~SortKeyBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SortKeyBuffer", modifiers: " const&", def_value: None }]
constexpr SortKeyBuffer(SortKeyBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SortKeyBuffer", modifiers: "&&", def_value: None }]
constexpr SortKeyBuffer(SortKeyBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SortKeyBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SortKeyBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SortKeyBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SortKeyBuffer& operator=(SortKeyBuffer&& o) noexcept = default;
  constexpr SortKeyBuffer& operator=(SortKeyBuffer const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_l1b, put=__set_l1b))  l1b;

constexpr void __set_l1b(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_l1b() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_l2b, put=__set_l2b))  l2b;

constexpr void __set_l2b(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_l2b() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_l3b, put=__set_l3b))  l3b;

constexpr void __set_l3b(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_l3b() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_l4sb, put=__set_l4sb))  l4sb;

constexpr void __set_l4sb(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_l4sb() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_l4tb, put=__set_l4tb))  l4tb;

constexpr void __set_l4tb(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_l4tb() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_l4kb, put=__set_l4kb))  l4kb;

constexpr void __set_l4kb(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_l4kb() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_l4wb, put=__set_l4wb))  l4wb;

constexpr void __set_l4wb(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_l4wb() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_l5b, put=__set_l5b))  l5b;

constexpr void __set_l5b(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_l5b() const;

 ::StringW __declspec(property(get=__get_source, put=__set_source))  source;

constexpr void __set_source(::StringW value) ;

constexpr ::StringW __get_source() const;

 int32_t __declspec(property(get=__get_l1, put=__set_l1))  l1;

constexpr void __set_l1(int32_t value) ;

constexpr int32_t __get_l1() const;

 int32_t __declspec(property(get=__get_l2, put=__set_l2))  l2;

constexpr void __set_l2(int32_t value) ;

constexpr int32_t __get_l2() const;

 int32_t __declspec(property(get=__get_l3, put=__set_l3))  l3;

constexpr void __set_l3(int32_t value) ;

constexpr int32_t __get_l3() const;

 int32_t __declspec(property(get=__get_l4s, put=__set_l4s))  l4s;

constexpr void __set_l4s(int32_t value) ;

constexpr int32_t __get_l4s() const;

 int32_t __declspec(property(get=__get_l4t, put=__set_l4t))  l4t;

constexpr void __set_l4t(int32_t value) ;

constexpr int32_t __get_l4t() const;

 int32_t __declspec(property(get=__get_l4k, put=__set_l4k))  l4k;

constexpr void __set_l4k(int32_t value) ;

constexpr int32_t __get_l4k() const;

 int32_t __declspec(property(get=__get_l4w, put=__set_l4w))  l4w;

constexpr void __set_l4w(int32_t value) ;

constexpr int32_t __get_l4w() const;

 int32_t __declspec(property(get=__get_l5, put=__set_l5))  l5;

constexpr void __set_l5(int32_t value) ;

constexpr int32_t __get_l5() const;

 int32_t __declspec(property(get=__get_lcid, put=__set_lcid))  lcid;

constexpr void __set_lcid(int32_t value) ;

constexpr int32_t __get_lcid() const;

 System::Globalization::CompareOptions __declspec(property(get=__get_options, put=__set_options))  options;

constexpr void __set_options(System::Globalization::CompareOptions value) ;

constexpr System::Globalization::CompareOptions __get_options() const;

 bool __declspec(property(get=__get_processLevel2, put=__set_processLevel2))  processLevel2;

constexpr void __set_processLevel2(bool value) ;

constexpr bool __get_processLevel2() const;

 bool __declspec(property(get=__get_frenchSort, put=__set_frenchSort))  frenchSort;

constexpr void __set_frenchSort(bool value) ;

constexpr bool __get_frenchSort() const;

 bool __declspec(property(get=__get_frenchSorted, put=__set_frenchSorted))  frenchSorted;

constexpr void __set_frenchSorted(bool value) ;

constexpr bool __get_frenchSorted() const;


// Methods

static Mono::Globalization::Unicode::SortKeyBuffer New_ctor(int32_t lcid) ;

/// @brief Method .ctor addr 0x22ab988 size 0x8 virtual false final false
 void _ctor(int32_t lcid) ;

/// @brief Method Reset addr 0x22afce4 size 0x14 virtual false final false
 void Reset() ;

/// @brief Method Initialize addr 0x22ab990 size 0x178 virtual false final false
 void Initialize(System::Globalization::CompareOptions options, int32_t lcid, ::StringW s, bool frenchSort) ;

/// @brief Method AppendCJKExtension addr 0x22ac3c4 size 0x94 virtual false final false
 void AppendCJKExtension(uint8_t lv1msb, uint8_t lv1lsb) ;

/// @brief Method AppendKana addr 0x22ac50c size 0x94 virtual false final false
 void AppendKana(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3, bool isSmallKana, uint8_t markType, bool isKatakana, bool isHalfWidth) ;

/// @brief Method AppendNormal addr 0x22ac280 size 0x144 virtual false final false
 void AppendNormal(uint8_t category, uint8_t lv1, uint8_t lv2, uint8_t lv3) ;

/// @brief Method AppendLevel5 addr 0x22afdc0 size 0x98 virtual false final false
 void AppendLevel5(uint8_t category, uint8_t lv1) ;

/// @brief Method AppendBufferPrimitive addr 0x22afcf8 size 0xc8 virtual false final false
 void AppendBufferPrimitive(uint8_t value, ByRef<::ArrayW<uint8_t>> buf, ByRef<int32_t> bidx) ;

/// @brief Method GetResultAndReset addr 0x22abe84 size 0x24 virtual false final false
 System::Globalization::SortKey GetResultAndReset() ;

/// @brief Method GetOptimizedLength addr 0x22b0334 size 0x60 virtual false final false
 int32_t GetOptimizedLength(::ArrayW<uint8_t> data, int32_t len, uint8_t defaultValue) ;

/// @brief Method GetResult addr 0x22afe58 size 0x4dc virtual false final false
 System::Globalization::SortKey GetResult() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(Mono::Globalization::Unicode::SortKeyBuffer);
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::SortKeyBuffer, "Mono.Globalization.Unicode", "SortKeyBuffer");
