#pragma once
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LinkInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__PageInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_def.hpp"
//  Writing Method size for method: UnityEngine::TextCore::Text::TextInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextInfo::*)()>(&UnityEngine::TextCore::Text::TextInfo::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2bcfde8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextInfo.Clear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextInfo::*)()>(&UnityEngine::TextCore::Text::TextInfo::Clear)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2bcff1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextInfo.ClearMeshInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextInfo::*)(bool)>(&UnityEngine::TextCore::Text::TextInfo::ClearMeshInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bcff78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                            "ClearMeshInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::Text::TextInfo.ClearLineInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TextCore::Text::TextInfo::*)()>(&UnityEngine::TextCore::Text::TextInfo::ClearLineInfo)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2bd0024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                            "ClearLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::TextCore::Text::TextInfo::__set_s_InfinityVectorPositive(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "s_InfinityVectorPositive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::__get_s_InfinityVectorPositive()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "s_InfinityVectorPositive", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get>();
}
 void UnityEngine::TextCore::Text::TextInfo::__set_s_InfinityVectorNegative(UnityEngine::Vector2 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector2, "s_InfinityVectorNegative", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get>(std::forward<UnityEngine::Vector2>(value));
}
 UnityEngine::Vector2 UnityEngine::TextCore::Text::TextInfo::__get_s_InfinityVectorNegative()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector2, "s_InfinityVectorNegative", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get>();
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_characterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextInfo::__get_characterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_spriteCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextInfo::__get_spriteCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_spaceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextInfo::__get_spaceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_wordCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextInfo::__get_wordCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_linkCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextInfo::__get_linkCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_lineCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextInfo::__get_lineCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_pageCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextInfo::__get_pageCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_materialCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextInfo::__get_materialCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_textElementInfo(::ArrayW<UnityEngine::TextCore::Text::TextElementInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::TextCore::Text::TextElementInfo>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::TextCore::Text::TextElementInfo>>(value));
}
constexpr ::ArrayW<UnityEngine::TextCore::Text::TextElementInfo> UnityEngine::TextCore::Text::TextInfo::__get_textElementInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::TextCore::Text::TextElementInfo>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_wordInfo(::ArrayW<UnityEngine::TextCore::Text::WordInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::TextCore::Text::WordInfo>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::TextCore::Text::WordInfo>>(value));
}
constexpr ::ArrayW<UnityEngine::TextCore::Text::WordInfo> UnityEngine::TextCore::Text::TextInfo::__get_wordInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::TextCore::Text::WordInfo>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_linkInfo(::ArrayW<UnityEngine::TextCore::Text::LinkInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::TextCore::Text::LinkInfo>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::TextCore::Text::LinkInfo>>(value));
}
constexpr ::ArrayW<UnityEngine::TextCore::Text::LinkInfo> UnityEngine::TextCore::Text::TextInfo::__get_linkInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::TextCore::Text::LinkInfo>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_lineInfo(::ArrayW<UnityEngine::TextCore::Text::LineInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::TextCore::Text::LineInfo>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::TextCore::Text::LineInfo>>(value));
}
constexpr ::ArrayW<UnityEngine::TextCore::Text::LineInfo> UnityEngine::TextCore::Text::TextInfo::__get_lineInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::TextCore::Text::LineInfo>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_pageInfo(::ArrayW<UnityEngine::TextCore::Text::PageInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::TextCore::Text::PageInfo>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::TextCore::Text::PageInfo>>(value));
}
constexpr ::ArrayW<UnityEngine::TextCore::Text::PageInfo> UnityEngine::TextCore::Text::TextInfo::__get_pageInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::TextCore::Text::PageInfo>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_meshInfo(::ArrayW<UnityEngine::TextCore::Text::MeshInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::TextCore::Text::MeshInfo>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::TextCore::Text::MeshInfo>>(value));
}
constexpr ::ArrayW<UnityEngine::TextCore::Text::MeshInfo> UnityEngine::TextCore::Text::TextInfo::__get_meshInfo() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::TextCore::Text::MeshInfo>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::TextCore::Text::TextInfo::__set_isDirty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::TextInfo::__get_isDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 UnityEngine::TextCore::Text::TextInfo::TextInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TextInfo>())) {}
 void UnityEngine::TextCore::Text::TextInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextInfo::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TextCore::Text::TextInfo::ClearMeshInfo(bool updateMesh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                            "ClearMeshInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, updateMesh);
}
 void UnityEngine::TextCore::Text::TextInfo::ClearLineInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                            "ClearLineInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
template<typename T>
 void UnityEngine::TextCore::Text::TextInfo::Resize(ByRef<::ArrayW<T>> array, int32_t size)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                        "Resize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, size);
}
template<typename T>
 void UnityEngine::TextCore::Text::TextInfo::Resize(ByRef<::ArrayW<T>> array, int32_t size, bool isBlockAllocated)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::Text::TextInfo>::get(),
                        "Resize",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<T>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, array, size, isBlockAllocated);
}
