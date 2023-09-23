#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: UnityEngine::Rendering::LocalKeyword.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::LocalKeyword::*)()>(&UnityEngine::Rendering::LocalKeyword::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b76e58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Rendering::LocalKeyword),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeyword>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::LocalKeyword.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::LocalKeyword::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::Rendering::LocalKeyword::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b76e60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Rendering::LocalKeyword),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeyword>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::LocalKeyword.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::LocalKeyword::*)(UnityEngine::Rendering::LocalKeyword)>(&UnityEngine::Rendering::LocalKeyword::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b76eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeyword>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LocalKeyword>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Rendering::LocalKeyword.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Rendering::LocalKeyword::*)()>(&UnityEngine::Rendering::LocalKeyword::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2b76f3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Rendering::LocalKeyword),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeyword>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rendering::LocalKeyword>
constexpr  UnityEngine::Rendering::LocalKeyword::operator System::IEquatable_1<UnityEngine::Rendering::LocalKeyword>() const {
return System::IEquatable_1<UnityEngine::Rendering::LocalKeyword>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_SpaceInfo", ty: "UnityEngine::Rendering::LocalKeywordSpace", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::LocalKeyword::LocalKeyword(UnityEngine::Rendering::LocalKeywordSpace m_SpaceInfo, ::StringW m_Name, uint32_t m_Index) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_SpaceInfo = m_SpaceInfo;
this->m_Name = m_Name;
this->m_Index = m_Index;
}
constexpr void UnityEngine::Rendering::LocalKeyword::__set_m_SpaceInfo(UnityEngine::Rendering::LocalKeywordSpace value)  {
::cordl_internals::setInstanceField<UnityEngine::Rendering::LocalKeywordSpace, 0x0>(this->__instance, std::forward<UnityEngine::Rendering::LocalKeywordSpace>(value));
}
constexpr UnityEngine::Rendering::LocalKeywordSpace UnityEngine::Rendering::LocalKeyword::__get_m_SpaceInfo() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rendering::LocalKeywordSpace, 0x0>(this->__instance);
}
constexpr void UnityEngine::Rendering::LocalKeyword::__set_m_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Rendering::LocalKeyword::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
constexpr void UnityEngine::Rendering::LocalKeyword::__set_m_Index(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::Rendering::LocalKeyword::__get_m_Index() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
 ::StringW UnityEngine::Rendering::LocalKeyword::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeyword>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::Rendering::LocalKeyword::Equals(::bs_hook::Il2CppWrapperType o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeyword>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, o);
}
 bool UnityEngine::Rendering::LocalKeyword::Equals(UnityEngine::Rendering::LocalKeyword rhs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeyword>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Rendering::LocalKeyword>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, rhs);
}
 int32_t UnityEngine::Rendering::LocalKeyword::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Rendering::LocalKeyword>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
