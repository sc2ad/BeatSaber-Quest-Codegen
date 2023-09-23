#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Mono::Globalization::Unicode {
class CodePointIndexer;
}
namespace Mono::Globalization::Unicode {
struct Mono__Globalization__Unicode__CodePointIndexer__TableRange;
}
// Type: ::TableRange
namespace Mono::Globalization::Unicode {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2257))
// CS Name: Mono.Globalization.Unicode.CodePointIndexer::TableRange
struct CORDL_TYPE Mono__Globalization__Unicode__CodePointIndexer__TableRange : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndexEnd", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Mono__Globalization__Unicode__CodePointIndexer__TableRange(int32_t Start, int32_t End, int32_t Count, int32_t IndexStart, int32_t IndexEnd) noexcept;


                    constexpr Mono__Globalization__Unicode__CodePointIndexer__TableRange(Mono__Globalization__Unicode__CodePointIndexer__TableRange const&) = default;
                    constexpr Mono__Globalization__Unicode__CodePointIndexer__TableRange(Mono__Globalization__Unicode__CodePointIndexer__TableRange&&) = default;
                    constexpr Mono__Globalization__Unicode__CodePointIndexer__TableRange& operator=(Mono__Globalization__Unicode__CodePointIndexer__TableRange const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mono__Globalization__Unicode__CodePointIndexer__TableRange& operator=(Mono__Globalization__Unicode__CodePointIndexer__TableRange&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mono__Globalization__Unicode__CodePointIndexer__TableRange(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Start, put=__set_Start))  Start;

constexpr void __set_Start(int32_t value) ;

constexpr int32_t __get_Start() const;

 int32_t __declspec(property(get=__get_End, put=__set_End))  End;

constexpr void __set_End(int32_t value) ;

constexpr int32_t __get_End() const;

 int32_t __declspec(property(get=__get_Count, put=__set_Count))  Count;

constexpr void __set_Count(int32_t value) ;

constexpr int32_t __get_Count() const;

 int32_t __declspec(property(get=__get_IndexStart, put=__set_IndexStart))  IndexStart;

constexpr void __set_IndexStart(int32_t value) ;

constexpr int32_t __get_IndexStart() const;

 int32_t __declspec(property(get=__get_IndexEnd, put=__set_IndexEnd))  IndexEnd;

constexpr void __set_IndexEnd(int32_t value) ;

constexpr int32_t __get_IndexEnd() const;


// Methods

/// @brief Method .ctor addr 0x22a7e78 size 0x18 virtual false final false
 void _ctor(int32_t start, int32_t end, int32_t indexStart) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
// Type: Mono.Globalization.Unicode::CodePointIndexer
namespace Mono::Globalization::Unicode {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2258))
// CS Name: Mono.Globalization.Unicode.CodePointIndexer
class CORDL_TYPE CodePointIndexer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TableRange = Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CodePointIndexer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: " const&", def_value: None }]
constexpr CodePointIndexer(CodePointIndexer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CodePointIndexer", modifiers: "&&", def_value: None }]
constexpr CodePointIndexer(CodePointIndexer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CodePointIndexer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CodePointIndexer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CodePointIndexer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CodePointIndexer& operator=(CodePointIndexer&& o) noexcept = default;
  constexpr CodePointIndexer& operator=(CodePointIndexer const& o) noexcept = default;
                


// Fields

 ::ArrayW<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange> __declspec(property(get=__get_ranges, put=__set_ranges))  ranges;

constexpr void __set_ranges(::ArrayW<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange> value) ;

constexpr ::ArrayW<Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange> __get_ranges() const;

 int32_t __declspec(property(get=__get_TotalCount, put=__set_TotalCount))  TotalCount;

constexpr void __set_TotalCount(int32_t value) ;

constexpr int32_t __get_TotalCount() const;

 int32_t __declspec(property(get=__get_defaultIndex, put=__set_defaultIndex))  defaultIndex;

constexpr void __set_defaultIndex(int32_t value) ;

constexpr int32_t __get_defaultIndex() const;

 int32_t __declspec(property(get=__get_defaultCP, put=__set_defaultCP))  defaultCP;

constexpr void __set_defaultCP(int32_t value) ;

constexpr int32_t __get_defaultCP() const;


// Methods

// Ctor Parameters [CppParam { name: "starts", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "ends", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "defaultIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "defaultCP", ty: "int32_t", modifiers: "", def_value: None }]
explicit CodePointIndexer(::ArrayW<int32_t> starts, ::ArrayW<int32_t> ends, int32_t defaultIndex, int32_t defaultCP) ;

/// @brief Method .ctor addr 0x22a7d24 size 0x154 virtual false final false
 void _ctor(::ArrayW<int32_t> starts, ::ArrayW<int32_t> ends, int32_t defaultIndex, int32_t defaultCP) ;

/// @brief Method ToIndex addr 0x22a7e90 size 0x84 virtual false final false
 int32_t ToIndex(int32_t cp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Globalization::Unicode
NEED_NO_BOX(Mono::Globalization::Unicode::CodePointIndexer);
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::CodePointIndexer, "Mono.Globalization.Unicode", "CodePointIndexer");
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::Mono__Globalization__Unicode__CodePointIndexer__TableRange, "Mono.Globalization.Unicode", "CodePointIndexer/TableRange");
