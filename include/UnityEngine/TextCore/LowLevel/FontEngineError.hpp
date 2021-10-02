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
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.LowLevel.FontEngineError
  // [TokenAttribute] Offset: FFFFFFFF
  struct FontEngineError/*, public System::Enum*/ {
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
    // Creating value type constructor for type: FontEngineError
    constexpr FontEngineError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Success
    static constexpr const int Success = 0;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Success
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Success();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Success
    static void _set_Success(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File_Path
    static constexpr const int Invalid_File_Path = 1;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File_Path
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_File_Path();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File_Path
    static void _set_Invalid_File_Path(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File_Format
    static constexpr const int Invalid_File_Format = 2;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File_Format
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_File_Format();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File_Format
    static void _set_Invalid_File_Format(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File_Structure
    static constexpr const int Invalid_File_Structure = 3;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File_Structure
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_File_Structure();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File_Structure
    static void _set_Invalid_File_Structure(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File
    static constexpr const int Invalid_File = 4;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_File();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_File
    static void _set_Invalid_File(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Table
    static constexpr const int Invalid_Table = 8;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Table
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_Table();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Table
    static void _set_Invalid_Table(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Glyph_Index
    static constexpr const int Invalid_Glyph_Index = 16;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Glyph_Index
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_Glyph_Index();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Glyph_Index
    static void _set_Invalid_Glyph_Index(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Character_Code
    static constexpr const int Invalid_Character_Code = 17;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Character_Code
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_Character_Code();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Character_Code
    static void _set_Invalid_Character_Code(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Pixel_Size
    static constexpr const int Invalid_Pixel_Size = 23;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Pixel_Size
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_Pixel_Size();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Pixel_Size
    static void _set_Invalid_Pixel_Size(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Library
    static constexpr const int Invalid_Library = 33;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Library
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_Library();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Library
    static void _set_Invalid_Library(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Face
    static constexpr const int Invalid_Face = 35;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Face
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_Face();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Face
    static void _set_Invalid_Face(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Library_or_Face
    static constexpr const int Invalid_Library_or_Face = 41;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Library_or_Face
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_Library_or_Face();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_Library_or_Face
    static void _set_Invalid_Library_or_Face(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Atlas_Generation_Cancelled
    static constexpr const int Atlas_Generation_Cancelled = 100;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Atlas_Generation_Cancelled
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Atlas_Generation_Cancelled();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Atlas_Generation_Cancelled
    static void _set_Atlas_Generation_Cancelled(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_SharedTextureData
    static constexpr const int Invalid_SharedTextureData = 101;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_SharedTextureData
    static UnityEngine::TextCore::LowLevel::FontEngineError _get_Invalid_SharedTextureData();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontEngineError Invalid_SharedTextureData
    static void _set_Invalid_SharedTextureData(UnityEngine::TextCore::LowLevel::FontEngineError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.TextCore.LowLevel.FontEngineError
  #pragma pack(pop)
  static check_size<sizeof(FontEngineError), 0 + sizeof(int)> __UnityEngine_TextCore_LowLevel_FontEngineErrorSizeCheck;
  static_assert(sizeof(FontEngineError) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::LowLevel::FontEngineError, "UnityEngine.TextCore.LowLevel", "FontEngineError");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
