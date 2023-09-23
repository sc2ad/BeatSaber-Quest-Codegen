#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureType_def.hpp"
//  Writing Method size for method: UnityEngine::XR::InputFeatureUsage.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::InputFeatureUsage::*)()>(&UnityEngine::XR::InputFeatureUsage::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputFeatureUsage.get_internalType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::InputFeatureType (UnityEngine::XR::InputFeatureUsage::*)()>(&UnityEngine::XR::InputFeatureUsage::get_internalType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d38b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                            "get_internalType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputFeatureUsage.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputFeatureUsage::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::XR::InputFeatureUsage::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d38b08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::InputFeatureUsage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputFeatureUsage.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::InputFeatureUsage::*)(UnityEngine::XR::InputFeatureUsage)>(&UnityEngine::XR::InputFeatureUsage::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d38b90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::InputFeatureUsage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::InputFeatureUsage.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::XR::InputFeatureUsage::*)()>(&UnityEngine::XR::InputFeatureUsage::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d38bd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::XR::InputFeatureUsage),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::XR::InputFeatureUsage>
constexpr  UnityEngine::XR::InputFeatureUsage::operator System::IEquatable_1<UnityEngine::XR::InputFeatureUsage>() const {
return System::IEquatable_1<UnityEngine::XR::InputFeatureUsage>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_InternalType", ty: "UnityEngine::XR::InputFeatureType", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::InputFeatureUsage::InputFeatureUsage(::StringW m_Name, UnityEngine::XR::InputFeatureType m_InternalType) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Name = m_Name;
this->m_InternalType = m_InternalType;
}
constexpr void UnityEngine::XR::InputFeatureUsage::__set_m_Name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::InputFeatureUsage::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::InputFeatureUsage::__set_m_InternalType(UnityEngine::XR::InputFeatureType value)  {
::cordl_internals::setInstanceField<UnityEngine::XR::InputFeatureType, 0x8>(this->__instance, std::forward<UnityEngine::XR::InputFeatureType>(value));
}
constexpr UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureUsage::__get_m_InternalType() const {
return ::cordl_internals::getInstanceField<UnityEngine::XR::InputFeatureType, 0x8>(this->__instance);
}
 ::StringW UnityEngine::XR::InputFeatureUsage::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureUsage::get_internalType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                            "get_internalType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::InputFeatureType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::XR::InputFeatureUsage::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool UnityEngine::XR::InputFeatureUsage::Equals(UnityEngine::XR::InputFeatureUsage other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::InputFeatureUsage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
 int32_t UnityEngine::XR::InputFeatureUsage::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::InputFeatureUsage>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
