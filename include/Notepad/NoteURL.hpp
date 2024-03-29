// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Notepad
namespace Notepad {
  // Forward declaring type: NoteURL
  struct NoteURL;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NoteURL, "Notepad", "NoteURL");
// Type namespace: Notepad
namespace Notepad {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Notepad.NoteURL
  // [TokenAttribute] Offset: FFFFFFFF
  struct NoteURL/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String url
    // Size: 0x8
    // Offset: 0x8
    ::StringW url;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: NoteURL
    constexpr NoteURL(::StringW name_ = {}, ::StringW url_ = {}) noexcept : name{name_}, url{url_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.String url
    [[deprecated("Use field access instead!")]] ::StringW& dyn_url();
  }; // Notepad.NoteURL
  #pragma pack(pop)
  static check_size<sizeof(NoteURL), 8 + sizeof(::StringW)> __Notepad_NoteURLSizeCheck;
  static_assert(sizeof(NoteURL) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
