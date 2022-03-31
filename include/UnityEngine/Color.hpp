// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Color, "UnityEngine", "Color");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Color
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: 11BF940
  // [RequiredByNativeCodeAttribute] Offset: 11BF940
  // [DefaultMemberAttribute] Offset: 11BF940
  // [NativeHeaderAttribute] Offset: 11BF940
  struct Color/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Color>*/ {
    public:
    public:
    // public System.Single r
    // Size: 0x4
    // Offset: 0x0
    float r;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single g
    // Size: 0x4
    // Offset: 0x4
    float g;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single b
    // Size: 0x4
    // Offset: 0x8
    float b;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single a
    // Size: 0x4
    // Offset: 0xC
    float a;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Color
    constexpr Color(float r_ = {}, float g_ = {}, float b_ = {}, float a_ = {}) noexcept : r{r_}, g{g_}, b{b_}, a{a_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Color>
    operator ::System::IEquatable_1<::UnityEngine::Color>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Color>*>(this);
    }
    // Get instance field reference: public System.Single r
    float& dyn_r();
    // Get instance field reference: public System.Single g
    float& dyn_g();
    // Get instance field reference: public System.Single b
    float& dyn_b();
    // Get instance field reference: public System.Single a
    float& dyn_a();
    // static public UnityEngine.Color get_red()
    // Offset: 0x1F2B9EC
    static ::UnityEngine::Color get_red();
    // static public UnityEngine.Color get_green()
    // Offset: 0x1F2BA00
    static ::UnityEngine::Color get_green();
    // static public UnityEngine.Color get_blue()
    // Offset: 0x1F2BA14
    static ::UnityEngine::Color get_blue();
    // static public UnityEngine.Color get_white()
    // Offset: 0x1F2BA28
    static ::UnityEngine::Color get_white();
    // static public UnityEngine.Color get_black()
    // Offset: 0x1F2BA3C
    static ::UnityEngine::Color get_black();
    // static public UnityEngine.Color get_yellow()
    // Offset: 0x1F2BA50
    static ::UnityEngine::Color get_yellow();
    // static public UnityEngine.Color get_cyan()
    // Offset: 0x1F2BA6C
    static ::UnityEngine::Color get_cyan();
    // static public UnityEngine.Color get_magenta()
    // Offset: 0x1F2BA80
    static ::UnityEngine::Color get_magenta();
    // static public UnityEngine.Color get_gray()
    // Offset: 0x1F2BA94
    static ::UnityEngine::Color get_gray();
    // static public UnityEngine.Color get_clear()
    // Offset: 0x1F2BAA8
    static ::UnityEngine::Color get_clear();
    // public System.Single get_grayscale()
    // Offset: 0x1F2BABC
    float get_grayscale();
    // public UnityEngine.Color get_linear()
    // Offset: 0x1F2BAF4
    ::UnityEngine::Color get_linear();
    // public System.Single get_maxColorComponent()
    // Offset: 0x1F2BBA4
    float get_maxColorComponent();
    // public System.Single get_Item(System.Int32 index)
    // Offset: 0x1F2BC2C
    float get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Single value)
    // Offset: 0x1F2BD2C
    void set_Item(int index, float value);
    // public System.Void .ctor(System.Single r, System.Single g, System.Single b, System.Single a)
    // Offset: 0x1F2B198
    // ABORTED: conflicts with another method.  Color(float r, float g, float b, float a);
    // public System.Void .ctor(System.Single r, System.Single g, System.Single b)
    // Offset: 0x1F2B1A4
    Color(float r, float g, float b);
    // public System.String ToString(System.String format)
    // Offset: 0x1F2B35C
    ::StringW ToString(::StringW format);
    // public System.Boolean Equals(UnityEngine.Color other)
    // Offset: 0x1F2B688
    bool Equals(::UnityEngine::Color other);
    // static public UnityEngine.Color Lerp(UnityEngine.Color a, UnityEngine.Color b, System.Single t)
    // Offset: 0x1F2B8B8
    static ::UnityEngine::Color Lerp(::UnityEngine::Color a, ::UnityEngine::Color b, float t);
    // static public UnityEngine.Color LerpUnclamped(UnityEngine.Color a, UnityEngine.Color b, System.Single t)
    // Offset: 0x1F2B998
    static ::UnityEngine::Color LerpUnclamped(::UnityEngine::Color a, ::UnityEngine::Color b, float t);
    // UnityEngine.Color RGBMultiplied(System.Single multiplier)
    // Offset: 0x1F2B9D0
    ::UnityEngine::Color RGBMultiplied(float multiplier);
    // static public System.Void RGBToHSV(UnityEngine.Color rgbColor, out System.Single H, out System.Single S, out System.Single V)
    // Offset: 0x1F2BE40
    static void RGBToHSV(::UnityEngine::Color rgbColor, ByRef<float> H, ByRef<float> S, ByRef<float> V);
    // static private System.Void RGBToHSVHelper(System.Single offset, System.Single dominantcolor, System.Single colorone, System.Single colortwo, out System.Single H, out System.Single S, out System.Single V)
    // Offset: 0x1F2BF58
    static void RGBToHSVHelper(float offset, float dominantcolor, float colorone, float colortwo, ByRef<float> H, ByRef<float> S, ByRef<float> V);
    // static public UnityEngine.Color HSVToRGB(System.Single H, System.Single S, System.Single V)
    // Offset: 0x1F2BFC8
    static ::UnityEngine::Color HSVToRGB(float H, float S, float V);
    // static public UnityEngine.Color HSVToRGB(System.Single H, System.Single S, System.Single V, System.Boolean hdr)
    // Offset: 0x1F2BFD0
    static ::UnityEngine::Color HSVToRGB(float H, float S, float V, bool hdr);
    // public override System.String ToString()
    // Offset: 0x1F2B1B8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F2B590
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x1F2B5F8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Color
  #pragma pack(pop)
  static check_size<sizeof(Color), 12 + sizeof(float)> __UnityEngine_ColorSizeCheck;
  static_assert(sizeof(Color) == 0x10);
  // static public UnityEngine.Color op_Addition(UnityEngine.Color a, UnityEngine.Color b)
  // Offset: 0x1F2B718
  ::UnityEngine::Color operator+(const ::UnityEngine::Color& a, const ::UnityEngine::Color& b);
  // static public UnityEngine.Color op_Subtraction(UnityEngine.Color a, UnityEngine.Color b)
  // Offset: 0x1F2B72C
  ::UnityEngine::Color operator-(const ::UnityEngine::Color& a, const ::UnityEngine::Color& b);
  // static public UnityEngine.Color op_Multiply(UnityEngine.Color a, UnityEngine.Color b)
  // Offset: 0x1F2B740
  ::UnityEngine::Color operator*(const ::UnityEngine::Color& a, const ::UnityEngine::Color& b);
  // static public UnityEngine.Color op_Multiply(UnityEngine.Color a, System.Single b)
  // Offset: 0x1F2B754
  ::UnityEngine::Color operator*(const ::UnityEngine::Color& a, const float& b);
  // static public UnityEngine.Color op_Multiply(System.Single b, UnityEngine.Color a)
  // Offset: 0x1F2B768
  ::UnityEngine::Color operator*(const float& b, const ::UnityEngine::Color& a);
  // static public UnityEngine.Color op_Division(UnityEngine.Color a, System.Single b)
  // Offset: 0x1F2B780
  ::UnityEngine::Color operator/(const ::UnityEngine::Color& a, const float& b);
  // static public System.Boolean op_Equality(UnityEngine.Color lhs, UnityEngine.Color rhs)
  // Offset: 0x1F2B794
  bool operator ==(const ::UnityEngine::Color& lhs, const ::UnityEngine::Color& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Color lhs, UnityEngine.Color rhs)
  // Offset: 0x1F2B89C
  bool operator !=(const ::UnityEngine::Color& lhs, const ::UnityEngine::Color& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Color::get_red
// Il2CppName: get_red
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_red)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_red", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_green
// Il2CppName: get_green
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_green)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_green", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_blue
// Il2CppName: get_blue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_blue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_blue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_white
// Il2CppName: get_white
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_white)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_white", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_black
// Il2CppName: get_black
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_black)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_black", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_yellow
// Il2CppName: get_yellow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_yellow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_yellow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_cyan
// Il2CppName: get_cyan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_cyan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_cyan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_magenta
// Il2CppName: get_magenta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_magenta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_magenta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_gray
// Il2CppName: get_gray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_gray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_gray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_clear
// Il2CppName: get_clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)()>(&UnityEngine::Color::get_clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_grayscale
// Il2CppName: get_grayscale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Color::*)()>(&UnityEngine::Color::get_grayscale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_grayscale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_linear
// Il2CppName: get_linear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::Color::*)()>(&UnityEngine::Color::get_linear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_linear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_maxColorComponent
// Il2CppName: get_maxColorComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Color::*)()>(&UnityEngine::Color::get_maxColorComponent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_maxColorComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Color::*)(int)>(&UnityEngine::Color::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Color::*)(int, float)>(&UnityEngine::Color::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::Color
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Color::Color
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Color::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Color::*)(::StringW)>(&UnityEngine::Color::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Color::*)(::UnityEngine::Color)>(&UnityEngine::Color::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color, float)>(&UnityEngine::Color::Lerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::LerpUnclamped
// Il2CppName: LerpUnclamped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color, ::UnityEngine::Color, float)>(&UnityEngine::Color::LerpUnclamped)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "LerpUnclamped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::RGBMultiplied
// Il2CppName: RGBMultiplied
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::Color::*)(float)>(&UnityEngine::Color::RGBMultiplied)> {
  static const MethodInfo* get() {
    static auto* multiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "RGBMultiplied", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplier});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::RGBToHSV
// Il2CppName: RGBToHSV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Color, ByRef<float>, ByRef<float>, ByRef<float>)>(&UnityEngine::Color::RGBToHSV)> {
  static const MethodInfo* get() {
    static auto* rgbColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* H = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* S = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* V = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "RGBToHSV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgbColor, H, S, V});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::RGBToHSVHelper
// Il2CppName: RGBToHSVHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, float, float, float, ByRef<float>, ByRef<float>, ByRef<float>)>(&UnityEngine::Color::RGBToHSVHelper)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* dominantcolor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* colorone = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* colortwo = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* H = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* S = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* V = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "RGBToHSVHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, dominantcolor, colorone, colortwo, H, S, V});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::HSVToRGB
// Il2CppName: HSVToRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(float, float, float)>(&UnityEngine::Color::HSVToRGB)> {
  static const MethodInfo* get() {
    static auto* H = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* S = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* V = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "HSVToRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{H, S, V});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::HSVToRGB
// Il2CppName: HSVToRGB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(float, float, float, bool)>(&UnityEngine::Color::HSVToRGB)> {
  static const MethodInfo* get() {
    static auto* H = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* S = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* V = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* hdr = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "HSVToRGB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{H, S, V, hdr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Color::*)()>(&UnityEngine::Color::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Color::*)()>(&UnityEngine::Color::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Color::*)(::Il2CppObject*)>(&UnityEngine::Color::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Color), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Color::operator+
// Il2CppName: op_Addition
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator/
// Il2CppName: op_Division
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Color::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
