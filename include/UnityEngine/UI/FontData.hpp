// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.FontStyle
#include "UnityEngine/FontStyle.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
// Including type: UnityEngine.HorizontalWrapMode
#include "UnityEngine/HorizontalWrapMode.hpp"
// Including type: UnityEngine.VerticalWrapMode
#include "UnityEngine/VerticalWrapMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.FontData
  // [TokenAttribute] Offset: FFFFFFFF
  class FontData : public ::Il2CppObject/*, public UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [FormerlySerializedAsAttribute] Offset: 0xEA9124
    // private UnityEngine.Font m_Font
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Font* m_Font;
    // Field size check
    static_assert(sizeof(UnityEngine::Font*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xEA9170
    // private System.Int32 m_FontSize
    // Size: 0x4
    // Offset: 0x18
    int m_FontSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xEA91BC
    // private UnityEngine.FontStyle m_FontStyle
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::FontStyle m_FontStyle;
    // Field size check
    static_assert(sizeof(UnityEngine::FontStyle) == 0x4);
    // private System.Boolean m_BestFit
    // Size: 0x1
    // Offset: 0x20
    bool m_BestFit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_BestFit and: m_MinSize
    char __padding3[0x3] = {};
    // private System.Int32 m_MinSize
    // Size: 0x4
    // Offset: 0x24
    int m_MinSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_MaxSize
    // Size: 0x4
    // Offset: 0x28
    int m_MaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [FormerlySerializedAsAttribute] Offset: 0xEA9238
    // private UnityEngine.TextAnchor m_Alignment
    // Size: 0x4
    // Offset: 0x2C
    UnityEngine::TextAnchor m_Alignment;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAnchor) == 0x4);
    // private System.Boolean m_AlignByGeometry
    // Size: 0x1
    // Offset: 0x30
    bool m_AlignByGeometry;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [FormerlySerializedAsAttribute] Offset: 0xEA9294
    // private System.Boolean m_RichText
    // Size: 0x1
    // Offset: 0x31
    bool m_RichText;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_RichText and: m_HorizontalOverflow
    char __padding8[0x2] = {};
    // private UnityEngine.HorizontalWrapMode m_HorizontalOverflow
    // Size: 0x4
    // Offset: 0x34
    UnityEngine::HorizontalWrapMode m_HorizontalOverflow;
    // Field size check
    static_assert(sizeof(UnityEngine::HorizontalWrapMode) == 0x4);
    // private UnityEngine.VerticalWrapMode m_VerticalOverflow
    // Size: 0x4
    // Offset: 0x38
    UnityEngine::VerticalWrapMode m_VerticalOverflow;
    // Field size check
    static_assert(sizeof(UnityEngine::VerticalWrapMode) == 0x4);
    // private System.Single m_LineSpacing
    // Size: 0x4
    // Offset: 0x3C
    float m_LineSpacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator UnityEngine::ISerializationCallbackReceiver
    operator UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get instance field reference: private UnityEngine.Font m_Font
    UnityEngine::Font*& dyn_m_Font();
    // Get instance field reference: private System.Int32 m_FontSize
    int& dyn_m_FontSize();
    // Get instance field reference: private UnityEngine.FontStyle m_FontStyle
    UnityEngine::FontStyle& dyn_m_FontStyle();
    // Get instance field reference: private System.Boolean m_BestFit
    bool& dyn_m_BestFit();
    // Get instance field reference: private System.Int32 m_MinSize
    int& dyn_m_MinSize();
    // Get instance field reference: private System.Int32 m_MaxSize
    int& dyn_m_MaxSize();
    // Get instance field reference: private UnityEngine.TextAnchor m_Alignment
    UnityEngine::TextAnchor& dyn_m_Alignment();
    // Get instance field reference: private System.Boolean m_AlignByGeometry
    bool& dyn_m_AlignByGeometry();
    // Get instance field reference: private System.Boolean m_RichText
    bool& dyn_m_RichText();
    // Get instance field reference: private UnityEngine.HorizontalWrapMode m_HorizontalOverflow
    UnityEngine::HorizontalWrapMode& dyn_m_HorizontalOverflow();
    // Get instance field reference: private UnityEngine.VerticalWrapMode m_VerticalOverflow
    UnityEngine::VerticalWrapMode& dyn_m_VerticalOverflow();
    // Get instance field reference: private System.Single m_LineSpacing
    float& dyn_m_LineSpacing();
    // static public UnityEngine.UI.FontData get_defaultFontData()
    // Offset: 0x1AC7DF4
    static UnityEngine::UI::FontData* get_defaultFontData();
    // public UnityEngine.Font get_font()
    // Offset: 0x1AC7E94
    UnityEngine::Font* get_font();
    // public System.Void set_font(UnityEngine.Font value)
    // Offset: 0x1AC7E9C
    void set_font(UnityEngine::Font* value);
    // public System.Int32 get_fontSize()
    // Offset: 0x1AC7EA4
    int get_fontSize();
    // public System.Void set_fontSize(System.Int32 value)
    // Offset: 0x1AC7EAC
    void set_fontSize(int value);
    // public UnityEngine.FontStyle get_fontStyle()
    // Offset: 0x1AC7EB4
    UnityEngine::FontStyle get_fontStyle();
    // public System.Void set_fontStyle(UnityEngine.FontStyle value)
    // Offset: 0x1AC7EBC
    void set_fontStyle(UnityEngine::FontStyle value);
    // public System.Boolean get_bestFit()
    // Offset: 0x1AC7EC4
    bool get_bestFit();
    // public System.Void set_bestFit(System.Boolean value)
    // Offset: 0x1AC7ECC
    void set_bestFit(bool value);
    // public System.Int32 get_minSize()
    // Offset: 0x1AC7ED8
    int get_minSize();
    // public System.Void set_minSize(System.Int32 value)
    // Offset: 0x1AC7EE0
    void set_minSize(int value);
    // public System.Int32 get_maxSize()
    // Offset: 0x1AC7EE8
    int get_maxSize();
    // public System.Void set_maxSize(System.Int32 value)
    // Offset: 0x1AC7EF0
    void set_maxSize(int value);
    // public UnityEngine.TextAnchor get_alignment()
    // Offset: 0x1AC7EF8
    UnityEngine::TextAnchor get_alignment();
    // public System.Void set_alignment(UnityEngine.TextAnchor value)
    // Offset: 0x1AC7F00
    void set_alignment(UnityEngine::TextAnchor value);
    // public System.Boolean get_alignByGeometry()
    // Offset: 0x1AC7F08
    bool get_alignByGeometry();
    // public System.Void set_alignByGeometry(System.Boolean value)
    // Offset: 0x1AC7F10
    void set_alignByGeometry(bool value);
    // public System.Boolean get_richText()
    // Offset: 0x1AC7F1C
    bool get_richText();
    // public System.Void set_richText(System.Boolean value)
    // Offset: 0x1AC7F24
    void set_richText(bool value);
    // public UnityEngine.HorizontalWrapMode get_horizontalOverflow()
    // Offset: 0x1AC7F30
    UnityEngine::HorizontalWrapMode get_horizontalOverflow();
    // public System.Void set_horizontalOverflow(UnityEngine.HorizontalWrapMode value)
    // Offset: 0x1AC7F38
    void set_horizontalOverflow(UnityEngine::HorizontalWrapMode value);
    // public UnityEngine.VerticalWrapMode get_verticalOverflow()
    // Offset: 0x1AC7F40
    UnityEngine::VerticalWrapMode get_verticalOverflow();
    // public System.Void set_verticalOverflow(UnityEngine.VerticalWrapMode value)
    // Offset: 0x1AC7F48
    void set_verticalOverflow(UnityEngine::VerticalWrapMode value);
    // public System.Single get_lineSpacing()
    // Offset: 0x1AC7F50
    float get_lineSpacing();
    // public System.Void set_lineSpacing(System.Single value)
    // Offset: 0x1AC7F58
    void set_lineSpacing(float value);
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x1AC7F60
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x1AC7F64
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public System.Void .ctor()
    // Offset: 0x1AC7E8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FontData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::FontData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FontData*, creationType>()));
    }
  }; // UnityEngine.UI.FontData
  #pragma pack(pop)
  static check_size<sizeof(FontData), 60 + sizeof(float)> __UnityEngine_UI_FontDataSizeCheck;
  static_assert(sizeof(FontData) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::FontData*, "UnityEngine.UI", "FontData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_defaultFontData
// Il2CppName: get_defaultFontData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::FontData* (*)()>(&UnityEngine::UI::FontData::get_defaultFontData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_defaultFontData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_font
// Il2CppName: get_font
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Font* (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_font)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_font", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_font
// Il2CppName: set_font
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(UnityEngine::Font*)>(&UnityEngine::UI::FontData::set_font)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Font")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_font", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_fontSize
// Il2CppName: get_fontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_fontSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_fontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_fontSize
// Il2CppName: set_fontSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(int)>(&UnityEngine::UI::FontData::set_fontSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_fontSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_fontStyle
// Il2CppName: get_fontStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::FontStyle (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_fontStyle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_fontStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_fontStyle
// Il2CppName: set_fontStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(UnityEngine::FontStyle)>(&UnityEngine::UI::FontData::set_fontStyle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "FontStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_fontStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_bestFit
// Il2CppName: get_bestFit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_bestFit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_bestFit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_bestFit
// Il2CppName: set_bestFit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(bool)>(&UnityEngine::UI::FontData::set_bestFit)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_bestFit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_minSize
// Il2CppName: get_minSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_minSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_minSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_minSize
// Il2CppName: set_minSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(int)>(&UnityEngine::UI::FontData::set_minSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_minSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_maxSize
// Il2CppName: get_maxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_maxSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_maxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_maxSize
// Il2CppName: set_maxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(int)>(&UnityEngine::UI::FontData::set_maxSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_maxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_alignment
// Il2CppName: get_alignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextAnchor (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_alignment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_alignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_alignment
// Il2CppName: set_alignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(UnityEngine::TextAnchor)>(&UnityEngine::UI::FontData::set_alignment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_alignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_alignByGeometry
// Il2CppName: get_alignByGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_alignByGeometry)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_alignByGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_alignByGeometry
// Il2CppName: set_alignByGeometry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(bool)>(&UnityEngine::UI::FontData::set_alignByGeometry)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_alignByGeometry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_richText
// Il2CppName: get_richText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_richText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_richText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_richText
// Il2CppName: set_richText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(bool)>(&UnityEngine::UI::FontData::set_richText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_richText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_horizontalOverflow
// Il2CppName: get_horizontalOverflow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::HorizontalWrapMode (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_horizontalOverflow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_horizontalOverflow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_horizontalOverflow
// Il2CppName: set_horizontalOverflow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(UnityEngine::HorizontalWrapMode)>(&UnityEngine::UI::FontData::set_horizontalOverflow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "HorizontalWrapMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_horizontalOverflow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_verticalOverflow
// Il2CppName: get_verticalOverflow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::VerticalWrapMode (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_verticalOverflow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_verticalOverflow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_verticalOverflow
// Il2CppName: set_verticalOverflow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(UnityEngine::VerticalWrapMode)>(&UnityEngine::UI::FontData::set_verticalOverflow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "VerticalWrapMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_verticalOverflow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::get_lineSpacing
// Il2CppName: get_lineSpacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::get_lineSpacing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "get_lineSpacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::set_lineSpacing
// Il2CppName: set_lineSpacing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)(float)>(&UnityEngine::UI::FontData::set_lineSpacing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "set_lineSpacing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::FontData::*)()>(&UnityEngine::UI::FontData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::FontData*), "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::FontData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
