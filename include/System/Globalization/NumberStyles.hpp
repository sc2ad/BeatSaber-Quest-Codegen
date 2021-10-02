// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.NumberStyles
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5E62C
  // [FlagsAttribute] Offset: FFFFFFFF
  struct NumberStyles/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NumberStyles
    constexpr NumberStyles(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Globalization.NumberStyles None
    static constexpr const int None = 0;
    // Get static field: static public System.Globalization.NumberStyles None
    static System::Globalization::NumberStyles _get_None();
    // Set static field: static public System.Globalization.NumberStyles None
    static void _set_None(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowLeadingWhite
    static constexpr const int AllowLeadingWhite = 1;
    // Get static field: static public System.Globalization.NumberStyles AllowLeadingWhite
    static System::Globalization::NumberStyles _get_AllowLeadingWhite();
    // Set static field: static public System.Globalization.NumberStyles AllowLeadingWhite
    static void _set_AllowLeadingWhite(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowTrailingWhite
    static constexpr const int AllowTrailingWhite = 2;
    // Get static field: static public System.Globalization.NumberStyles AllowTrailingWhite
    static System::Globalization::NumberStyles _get_AllowTrailingWhite();
    // Set static field: static public System.Globalization.NumberStyles AllowTrailingWhite
    static void _set_AllowTrailingWhite(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowLeadingSign
    static constexpr const int AllowLeadingSign = 4;
    // Get static field: static public System.Globalization.NumberStyles AllowLeadingSign
    static System::Globalization::NumberStyles _get_AllowLeadingSign();
    // Set static field: static public System.Globalization.NumberStyles AllowLeadingSign
    static void _set_AllowLeadingSign(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowTrailingSign
    static constexpr const int AllowTrailingSign = 8;
    // Get static field: static public System.Globalization.NumberStyles AllowTrailingSign
    static System::Globalization::NumberStyles _get_AllowTrailingSign();
    // Set static field: static public System.Globalization.NumberStyles AllowTrailingSign
    static void _set_AllowTrailingSign(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowParentheses
    static constexpr const int AllowParentheses = 16;
    // Get static field: static public System.Globalization.NumberStyles AllowParentheses
    static System::Globalization::NumberStyles _get_AllowParentheses();
    // Set static field: static public System.Globalization.NumberStyles AllowParentheses
    static void _set_AllowParentheses(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowDecimalPoint
    static constexpr const int AllowDecimalPoint = 32;
    // Get static field: static public System.Globalization.NumberStyles AllowDecimalPoint
    static System::Globalization::NumberStyles _get_AllowDecimalPoint();
    // Set static field: static public System.Globalization.NumberStyles AllowDecimalPoint
    static void _set_AllowDecimalPoint(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowThousands
    static constexpr const int AllowThousands = 64;
    // Get static field: static public System.Globalization.NumberStyles AllowThousands
    static System::Globalization::NumberStyles _get_AllowThousands();
    // Set static field: static public System.Globalization.NumberStyles AllowThousands
    static void _set_AllowThousands(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowExponent
    static constexpr const int AllowExponent = 128;
    // Get static field: static public System.Globalization.NumberStyles AllowExponent
    static System::Globalization::NumberStyles _get_AllowExponent();
    // Set static field: static public System.Globalization.NumberStyles AllowExponent
    static void _set_AllowExponent(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowCurrencySymbol
    static constexpr const int AllowCurrencySymbol = 256;
    // Get static field: static public System.Globalization.NumberStyles AllowCurrencySymbol
    static System::Globalization::NumberStyles _get_AllowCurrencySymbol();
    // Set static field: static public System.Globalization.NumberStyles AllowCurrencySymbol
    static void _set_AllowCurrencySymbol(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles AllowHexSpecifier
    static constexpr const int AllowHexSpecifier = 512;
    // Get static field: static public System.Globalization.NumberStyles AllowHexSpecifier
    static System::Globalization::NumberStyles _get_AllowHexSpecifier();
    // Set static field: static public System.Globalization.NumberStyles AllowHexSpecifier
    static void _set_AllowHexSpecifier(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles Integer
    static constexpr const int Integer = 7;
    // Get static field: static public System.Globalization.NumberStyles Integer
    static System::Globalization::NumberStyles _get_Integer();
    // Set static field: static public System.Globalization.NumberStyles Integer
    static void _set_Integer(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles HexNumber
    static constexpr const int HexNumber = 515;
    // Get static field: static public System.Globalization.NumberStyles HexNumber
    static System::Globalization::NumberStyles _get_HexNumber();
    // Set static field: static public System.Globalization.NumberStyles HexNumber
    static void _set_HexNumber(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles Number
    static constexpr const int Number = 111;
    // Get static field: static public System.Globalization.NumberStyles Number
    static System::Globalization::NumberStyles _get_Number();
    // Set static field: static public System.Globalization.NumberStyles Number
    static void _set_Number(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles Float
    static constexpr const int Float = 167;
    // Get static field: static public System.Globalization.NumberStyles Float
    static System::Globalization::NumberStyles _get_Float();
    // Set static field: static public System.Globalization.NumberStyles Float
    static void _set_Float(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles Currency
    static constexpr const int Currency = 383;
    // Get static field: static public System.Globalization.NumberStyles Currency
    static System::Globalization::NumberStyles _get_Currency();
    // Set static field: static public System.Globalization.NumberStyles Currency
    static void _set_Currency(System::Globalization::NumberStyles value);
    // static field const value: static public System.Globalization.NumberStyles Any
    static constexpr const int Any = 511;
    // Get static field: static public System.Globalization.NumberStyles Any
    static System::Globalization::NumberStyles _get_Any();
    // Set static field: static public System.Globalization.NumberStyles Any
    static void _set_Any(System::Globalization::NumberStyles value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Globalization.NumberStyles
  #pragma pack(pop)
  static check_size<sizeof(NumberStyles), 0 + sizeof(int)> __System_Globalization_NumberStylesSizeCheck;
  static_assert(sizeof(NumberStyles) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::NumberStyles, "System.Globalization", "NumberStyles");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
