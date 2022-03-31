// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUIContent
  class GUIContent;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayout
  class GUILayout;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUILayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayout*, "UnityEngine", "GUILayout");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayout
  // [TokenAttribute] Offset: FFFFFFFF
  class GUILayout : public ::Il2CppObject {
    public:
    // static public System.Void Label(System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAA6F0
    static void Label(::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Void Label(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAA884
    static void Label(::StringW text, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static private System.Void DoLabel(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAA7AC
    static void DoLabel(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Void Box(UnityEngine.Texture image, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAA980
    static void Box(::UnityEngine::Texture* image, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static private System.Void DoBox(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAAA3C
    static void DoBox(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Boolean Button(System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAAB14
    static bool Button(::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static private System.Boolean DoButton(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAABD0
    static bool DoButton(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.String TextField(System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAACA8
    static ::StringW TextField(::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.String TextArea(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAAF90
    static ::StringW TextArea(::StringW text, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static private System.String DoTextField(System.String text, System.Int32 maxLength, System.Boolean multiline, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAAD3C
    static ::StringW DoTextField(::StringW text, int maxLength, bool multiline, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Boolean Toggle(System.Boolean value, System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAAFB0
    static bool Toggle(bool value, ::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static private System.Boolean DoToggle(System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAB074
    static bool DoToggle(bool value, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAB15C
    static float HorizontalSlider(float value, float leftValue, float rightValue, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static private System.Single DoHorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAB218
    static float DoHorizontalSlider(float value, float leftValue, float rightValue, ::UnityEngine::GUIStyle* slider, ::UnityEngine::GUIStyle* thumb, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Void Space(System.Single pixels)
    // Offset: 0x1FAB350
    static void Space(float pixels);
    // static public System.Void FlexibleSpace()
    // Offset: 0x1FAB764
    static void FlexibleSpace();
    // static public System.Void BeginHorizontal(params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FABABC
    static void BeginHorizontal(::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FABB5C
    static void BeginHorizontal(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Void EndHorizontal()
    // Offset: 0x1FABFC0
    static void EndHorizontal();
    // static public System.Void BeginVertical(params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAC214
    static void BeginVertical(::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FAC2B4
    static void BeginVertical(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Void EndVertical()
    // Offset: 0x1FAC450
    static void EndVertical();
    // static public System.Void BeginArea(UnityEngine.Rect screenRect)
    // Offset: 0x1FAC4AC
    static void BeginArea(::UnityEngine::Rect screenRect);
    // static public System.Void BeginArea(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x1FAC574
    static void BeginArea(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);
    // static public System.Void EndArea()
    // Offset: 0x1FACA38
    static void EndArea();
    // static public UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FACBC4
    static ::UnityEngine::Vector2 BeginScrollView(::UnityEngine::Vector2 scrollPosition, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, System.Boolean alwaysShowHorizontal, System.Boolean alwaysShowVertical, UnityEngine.GUIStyle horizontalScrollbar, UnityEngine.GUIStyle verticalScrollbar, UnityEngine.GUIStyle background, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1FACC98
    static ::UnityEngine::Vector2 BeginScrollView(::UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, ::UnityEngine::GUIStyle* horizontalScrollbar, ::UnityEngine::GUIStyle* verticalScrollbar, ::UnityEngine::GUIStyle* background, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Void EndScrollView()
    // Offset: 0x1FACF14
    static void EndScrollView();
    // static System.Void EndScrollView(System.Boolean handleScrollWheel)
    // Offset: 0x1FACF1C
    static void EndScrollView(bool handleScrollWheel);
    // static public UnityEngine.GUILayoutOption Width(System.Single width)
    // Offset: 0x1FA9780
    static ::UnityEngine::GUILayoutOption* Width(float width);
    // static public UnityEngine.GUILayoutOption Height(System.Single height)
    // Offset: 0x1FA9810
    static ::UnityEngine::GUILayoutOption* Height(float height);
    // static public UnityEngine.GUILayoutOption ExpandWidth(System.Boolean expand)
    // Offset: 0x1FABA24
    static ::UnityEngine::GUILayoutOption* ExpandWidth(bool expand);
    // static public UnityEngine.GUILayoutOption ExpandHeight(System.Boolean expand)
    // Offset: 0x1FAB98C
    static ::UnityEngine::GUILayoutOption* ExpandHeight(bool expand);
  }; // UnityEngine.GUILayout
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUILayout::Label
// Il2CppName: Label
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::Label)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Label", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Label
// Il2CppName: Label
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::Label)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Label", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoLabel
// Il2CppName: DoLabel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::DoLabel)> {
  static const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoLabel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Box
// Il2CppName: Box
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::Box)> {
  static const MethodInfo* get() {
    static auto* image = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Box", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{image, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoBox
// Il2CppName: DoBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::DoBox)> {
  static const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Button
// Il2CppName: Button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::Button)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoButton
// Il2CppName: DoButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::DoButton)> {
  static const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::TextField
// Il2CppName: TextField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::TextField)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "TextField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::TextArea
// Il2CppName: TextArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::TextArea)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "TextArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoTextField
// Il2CppName: DoTextField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int, bool, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::DoTextField)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* maxLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* multiline = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoTextField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, maxLength, multiline, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Toggle
// Il2CppName: Toggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, ::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::Toggle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Toggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, text, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoToggle
// Il2CppName: DoToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::DoToggle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, content, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::HorizontalSlider
// Il2CppName: HorizontalSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::HorizontalSlider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* leftValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rightValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "HorizontalSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, leftValue, rightValue, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::DoHorizontalSlider
// Il2CppName: DoHorizontalSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::DoHorizontalSlider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* leftValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rightValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* slider = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* thumb = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "DoHorizontalSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, leftValue, rightValue, slider, thumb, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Space
// Il2CppName: Space
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&UnityEngine::GUILayout::Space)> {
  static const MethodInfo* get() {
    static auto* pixels = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Space", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixels});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::FlexibleSpace
// Il2CppName: FlexibleSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::FlexibleSpace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "FlexibleSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginHorizontal
// Il2CppName: BeginHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::BeginHorizontal)> {
  static const MethodInfo* get() {
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginHorizontal
// Il2CppName: BeginHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::BeginHorizontal)> {
  static const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndHorizontal
// Il2CppName: EndHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::EndHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginVertical
// Il2CppName: BeginVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::BeginVertical)> {
  static const MethodInfo* get() {
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginVertical
// Il2CppName: BeginVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::BeginVertical)> {
  static const MethodInfo* get() {
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{content, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndVertical
// Il2CppName: EndVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::EndVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginArea
// Il2CppName: BeginArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect)>(&UnityEngine::GUILayout::BeginArea)> {
  static const MethodInfo* get() {
    static auto* screenRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenRect});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginArea
// Il2CppName: BeginArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&UnityEngine::GUILayout::BeginArea)> {
  static const MethodInfo* get() {
    static auto* screenRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenRect, content, style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndArea
// Il2CppName: EndArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::EndArea)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginScrollView
// Il2CppName: BeginScrollView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::BeginScrollView)> {
  static const MethodInfo* get() {
    static auto* scrollPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginScrollView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scrollPosition, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::BeginScrollView
// Il2CppName: BeginScrollView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, bool, bool, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayout::BeginScrollView)> {
  static const MethodInfo* get() {
    static auto* scrollPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* alwaysShowHorizontal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* alwaysShowVertical = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* horizontalScrollbar = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* verticalScrollbar = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* background = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "BeginScrollView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scrollPosition, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndScrollView
// Il2CppName: EndScrollView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayout::EndScrollView)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndScrollView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::EndScrollView
// Il2CppName: EndScrollView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::GUILayout::EndScrollView)> {
  static const MethodInfo* get() {
    static auto* handleScrollWheel = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "EndScrollView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handleScrollWheel});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Width
// Il2CppName: Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutOption* (*)(float)>(&UnityEngine::GUILayout::Width)> {
  static const MethodInfo* get() {
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{width});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::Height
// Il2CppName: Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutOption* (*)(float)>(&UnityEngine::GUILayout::Height)> {
  static const MethodInfo* get() {
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{height});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::ExpandWidth
// Il2CppName: ExpandWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutOption* (*)(bool)>(&UnityEngine::GUILayout::ExpandWidth)> {
  static const MethodInfo* get() {
    static auto* expand = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "ExpandWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expand});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayout::ExpandHeight
// Il2CppName: ExpandHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutOption* (*)(bool)>(&UnityEngine::GUILayout::ExpandHeight)> {
  static const MethodInfo* get() {
    static auto* expand = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayout*), "ExpandHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expand});
  }
};
