#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphAdjustmentRecord_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphValueRecord_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.get_glyphIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bac8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                            "get_glyphIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.get_glyphValueRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::TextCore::LowLevel::GlyphValueRecord (UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphValueRecord)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2bac8c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                            "get_glyphValueRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)()>(&UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2bac8d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)(::bs_hook::Il2CppWrapperType)>(&UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2bac940;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::*)(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord)>(&UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2bac9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IEquatable_1<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>
constexpr  UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::operator System::IEquatable_1<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>() const {
return System::IEquatable_1<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_GlyphIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_GlyphValueRecord", ty: "UnityEngine::TextCore::LowLevel::GlyphValueRecord", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::GlyphAdjustmentRecord(uint32_t m_GlyphIndex, UnityEngine::TextCore::LowLevel::GlyphValueRecord m_GlyphValueRecord) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_GlyphIndex = m_GlyphIndex;
this->m_GlyphValueRecord = m_GlyphValueRecord;
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::__set_m_GlyphIndex(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::__get_m_GlyphIndex() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::__set_m_GlyphValueRecord(UnityEngine::TextCore::LowLevel::GlyphValueRecord value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::LowLevel::GlyphValueRecord, 0x4>(this->__instance, std::forward<UnityEngine::TextCore::LowLevel::GlyphValueRecord>(value));
}
constexpr UnityEngine::TextCore::LowLevel::GlyphValueRecord UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::__get_m_GlyphValueRecord() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::LowLevel::GlyphValueRecord, 0x4>(this->__instance);
}
 uint32_t UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                            "get_glyphIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::TextCore::LowLevel::GlyphValueRecord UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::get_glyphValueRecord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                            "get_glyphValueRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::TextCore::LowLevel::GlyphValueRecord, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord::Equals(UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TextCore::LowLevel::GlyphAdjustmentRecord>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
