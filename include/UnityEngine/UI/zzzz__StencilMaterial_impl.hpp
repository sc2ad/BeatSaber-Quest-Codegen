#pragma once
namespace {
#include "UnityEngine/UI/zzzz__StencilMaterial_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::*)()>(&::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c11608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_baseMat(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_baseMat() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_customMat(::UnityEngine::Material value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Material>(value));
}
constexpr ::UnityEngine::Material ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_customMat() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_stencilId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_stencilId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_operation(::UnityEngine::Rendering::StencilOp value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::StencilOp, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rendering::StencilOp>(value));
}
constexpr ::UnityEngine::Rendering::StencilOp ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_operation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::StencilOp, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_compareFunction(::UnityEngine::Rendering::CompareFunction value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::CompareFunction, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rendering::CompareFunction>(value));
}
constexpr ::UnityEngine::Rendering::CompareFunction ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_compareFunction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::CompareFunction, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_readMask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_readMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_writeMask(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_writeMask() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_useAlphaClip(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_useAlphaClip() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__set_colorMask(::UnityEngine::Rendering::ColorWriteMask value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rendering::ColorWriteMask, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Rendering::ColorWriteMask>(value));
}
constexpr ::UnityEngine::Rendering::ColorWriteMask ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::__get_colorMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rendering::ColorWriteMask, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::____UnityEngine__UI__StencilMaterial__MatEntry()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____UnityEngine__UI__StencilMaterial__MatEntry>())) {}
 void ::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (*)(::UnityEngine::Material, int32_t)>(&::UnityEngine::UI::StencilMaterial::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c10be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (*)(::UnityEngine::Material, int32_t, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask)>(&::UnityEngine::UI::StencilMaterial::Add)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c10bec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.LogWarningWhenNotInBatchmode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Object)>(&::UnityEngine::UI::StencilMaterial::LogWarningWhenNotInBatchmode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c11590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "LogWarningWhenNotInBatchmode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Add
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material (*)(::UnityEngine::Material, int32_t, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask, int32_t, int32_t)>(&::UnityEngine::UI::StencilMaterial::Add)> {
  constexpr static std::size_t size = 0x918;
  constexpr static std::size_t addrs = 0x2c10c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material)>(&::UnityEngine::UI::StencilMaterial::Remove)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2c11618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.ClearAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UI::StencilMaterial::ClearAll)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2c117d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "ClearAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::UI::StencilMaterial::__set_m_List(::System::Collections::Generic::List_1<::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry>, "m_List", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry>>(value));
}
 ::System::Collections::Generic::List_1<::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry> ::UnityEngine::UI::StencilMaterial::__get_m_List()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UI::____UnityEngine__UI__StencilMaterial__MatEntry>, "m_List", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get>();
}
 ::UnityEngine::Material ::UnityEngine::UI::StencilMaterial::Add(::UnityEngine::Material baseMat, int32_t stencilID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(nullptr, ___internal_method, baseMat, stencilID);
}
 ::UnityEngine::Material ::UnityEngine::UI::StencilMaterial::Add(::UnityEngine::Material baseMat, int32_t stencilID, ::UnityEngine::Rendering::StencilOp operation, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(nullptr, ___internal_method, baseMat, stencilID, operation, compareFunction, colorWriteMask);
}
 void ::UnityEngine::UI::StencilMaterial::LogWarningWhenNotInBatchmode(::StringW warning, ::UnityEngine::Object context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "LogWarningWhenNotInBatchmode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, warning, context);
}
 ::UnityEngine::Material ::UnityEngine::UI::StencilMaterial::Add(::UnityEngine::Material baseMat, int32_t stencilID, ::UnityEngine::Rendering::StencilOp operation, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask, int32_t readMask, int32_t writeMask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "Add",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material, false>(nullptr, ___internal_method, baseMat, stencilID, operation, compareFunction, colorWriteMask, readMask, writeMask);
}
 void ::UnityEngine::UI::StencilMaterial::Remove(::UnityEngine::Material customMat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, customMat);
}
 void ::UnityEngine::UI::StencilMaterial::ClearAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial>::get(),
                            "ClearAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
