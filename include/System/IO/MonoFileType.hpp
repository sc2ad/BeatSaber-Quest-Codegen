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
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.MonoFileType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MonoFileType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: MonoFileType
    constexpr MonoFileType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.MonoFileType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public System.IO.MonoFileType Unknown
    static System::IO::MonoFileType _get_Unknown();
    // Set static field: static public System.IO.MonoFileType Unknown
    static void _set_Unknown(System::IO::MonoFileType value);
    // static field const value: static public System.IO.MonoFileType Disk
    static constexpr const int Disk = 1;
    // Get static field: static public System.IO.MonoFileType Disk
    static System::IO::MonoFileType _get_Disk();
    // Set static field: static public System.IO.MonoFileType Disk
    static void _set_Disk(System::IO::MonoFileType value);
    // static field const value: static public System.IO.MonoFileType Char
    static constexpr const int Char = 2;
    // Get static field: static public System.IO.MonoFileType Char
    static System::IO::MonoFileType _get_Char();
    // Set static field: static public System.IO.MonoFileType Char
    static void _set_Char(System::IO::MonoFileType value);
    // static field const value: static public System.IO.MonoFileType Pipe
    static constexpr const int Pipe = 3;
    // Get static field: static public System.IO.MonoFileType Pipe
    static System::IO::MonoFileType _get_Pipe();
    // Set static field: static public System.IO.MonoFileType Pipe
    static void _set_Pipe(System::IO::MonoFileType value);
    // static field const value: static public System.IO.MonoFileType Remote
    static constexpr const int Remote = 32768;
    // Get static field: static public System.IO.MonoFileType Remote
    static System::IO::MonoFileType _get_Remote();
    // Set static field: static public System.IO.MonoFileType Remote
    static void _set_Remote(System::IO::MonoFileType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.IO.MonoFileType
  #pragma pack(pop)
  static check_size<sizeof(MonoFileType), 0 + sizeof(int)> __System_IO_MonoFileTypeSizeCheck;
  static_assert(sizeof(MonoFileType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::MonoFileType, "System.IO", "MonoFileType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
