#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
struct BRECORD;
}
// Forward declare root types
namespace System {
struct Variant;
}
// Type: System::Variant
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2639))
// CS Name: System.Variant
struct CORDL_TYPE Variant : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "vt", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "wReserved1", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "wReserved2", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "wReserved3", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "llVal", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "lVal", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bVal", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "iVal", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "fltVal", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "dblVal", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "boolVal", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "bstrVal", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "cVal", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "uiVal", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "ulVal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ullVal", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "intVal", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "uintVal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "pdispVal", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "bRecord", ty: "::System::BRECORD", modifiers: "", def_value: None }]
constexpr Variant(int16_t vt, uint16_t wReserved1, uint16_t wReserved2, uint16_t wReserved3, int64_t llVal, int32_t lVal, uint8_t bVal, int16_t iVal, float_t fltVal, double_t dblVal, int16_t boolVal, ::cordl_internals::intptr_t bstrVal, int8_t cVal, uint16_t uiVal, uint32_t ulVal, uint64_t ullVal, int32_t intVal, uint32_t uintVal, ::cordl_internals::intptr_t pdispVal, ::System::BRECORD bRecord) noexcept;


                    constexpr Variant(Variant const&) = default;
                    constexpr Variant(Variant&&) = default;
                    constexpr Variant& operator=(Variant const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Variant& operator=(Variant&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Variant(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int16_t __declspec(property(get=__get_vt, put=__set_vt))  vt;

constexpr void __set_vt(int16_t value) ;

constexpr int16_t __get_vt() const;

 uint16_t __declspec(property(get=__get_wReserved1, put=__set_wReserved1))  wReserved1;

constexpr void __set_wReserved1(uint16_t value) ;

constexpr uint16_t __get_wReserved1() const;

 uint16_t __declspec(property(get=__get_wReserved2, put=__set_wReserved2))  wReserved2;

constexpr void __set_wReserved2(uint16_t value) ;

constexpr uint16_t __get_wReserved2() const;

 uint16_t __declspec(property(get=__get_wReserved3, put=__set_wReserved3))  wReserved3;

constexpr void __set_wReserved3(uint16_t value) ;

constexpr uint16_t __get_wReserved3() const;

 int64_t __declspec(property(get=__get_llVal, put=__set_llVal))  llVal;

constexpr void __set_llVal(int64_t value) ;

constexpr int64_t __get_llVal() const;

 int32_t __declspec(property(get=__get_lVal, put=__set_lVal))  lVal;

constexpr void __set_lVal(int32_t value) ;

constexpr int32_t __get_lVal() const;

 uint8_t __declspec(property(get=__get_bVal, put=__set_bVal))  bVal;

constexpr void __set_bVal(uint8_t value) ;

constexpr uint8_t __get_bVal() const;

 int16_t __declspec(property(get=__get_iVal, put=__set_iVal))  iVal;

constexpr void __set_iVal(int16_t value) ;

constexpr int16_t __get_iVal() const;

 float_t __declspec(property(get=__get_fltVal, put=__set_fltVal))  fltVal;

constexpr void __set_fltVal(float_t value) ;

constexpr float_t __get_fltVal() const;

 double_t __declspec(property(get=__get_dblVal, put=__set_dblVal))  dblVal;

constexpr void __set_dblVal(double_t value) ;

constexpr double_t __get_dblVal() const;

 int16_t __declspec(property(get=__get_boolVal, put=__set_boolVal))  boolVal;

constexpr void __set_boolVal(int16_t value) ;

constexpr int16_t __get_boolVal() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_bstrVal, put=__set_bstrVal))  bstrVal;

constexpr void __set_bstrVal(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_bstrVal() const;

 int8_t __declspec(property(get=__get_cVal, put=__set_cVal))  cVal;

constexpr void __set_cVal(int8_t value) ;

constexpr int8_t __get_cVal() const;

 uint16_t __declspec(property(get=__get_uiVal, put=__set_uiVal))  uiVal;

constexpr void __set_uiVal(uint16_t value) ;

constexpr uint16_t __get_uiVal() const;

 uint32_t __declspec(property(get=__get_ulVal, put=__set_ulVal))  ulVal;

constexpr void __set_ulVal(uint32_t value) ;

constexpr uint32_t __get_ulVal() const;

 uint64_t __declspec(property(get=__get_ullVal, put=__set_ullVal))  ullVal;

constexpr void __set_ullVal(uint64_t value) ;

constexpr uint64_t __get_ullVal() const;

 int32_t __declspec(property(get=__get_intVal, put=__set_intVal))  intVal;

constexpr void __set_intVal(int32_t value) ;

constexpr int32_t __get_intVal() const;

 uint32_t __declspec(property(get=__get_uintVal, put=__set_uintVal))  uintVal;

constexpr void __set_uintVal(uint32_t value) ;

constexpr uint32_t __get_uintVal() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_pdispVal, put=__set_pdispVal))  pdispVal;

constexpr void __set_pdispVal(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_pdispVal() const;

 ::System::BRECORD __declspec(property(get=__get_bRecord, put=__set_bRecord))  bRecord;

constexpr void __set_bRecord(::System::BRECORD value) ;

constexpr ::System::BRECORD __get_bRecord() const;


// Methods

/// @brief Method Clear addr 0x249bc2c size 0x74 virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Variant, "System", "Variant");
