#pragma once
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
 void UnityEngine::UnityEngine__TextAsset__EncodingUtility::__set_encodingLookup(::ArrayW<System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,System::Text::Encoding>> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,System::Text::Encoding>>, "encodingLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__TextAsset__EncodingUtility>::get>(std::forward<::ArrayW<System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,System::Text::Encoding>>>(value));
}
 ::ArrayW<System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,System::Text::Encoding>> UnityEngine::UnityEngine__TextAsset__EncodingUtility::__get_encodingLookup()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Collections::Generic::KeyValuePair_2<::ArrayW<uint8_t>,System::Text::Encoding>>, "encodingLookup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__TextAsset__EncodingUtility>::get>();
}
 void UnityEngine::UnityEngine__TextAsset__EncodingUtility::__set_targetEncoding(System::Text::Encoding value)  {
::cordl_internals::setStaticField<System::Text::Encoding, "targetEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__TextAsset__EncodingUtility>::get>(std::forward<System::Text::Encoding>(value));
}
 System::Text::Encoding UnityEngine::UnityEngine__TextAsset__EncodingUtility::__get_targetEncoding()  {
return ::cordl_internals::getStaticField<System::Text::Encoding, "targetEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UnityEngine__TextAsset__EncodingUtility>::get>();
}
//  Writing Method size for method: UnityEngine::TextAsset.get_bytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (UnityEngine::TextAsset::*)()>(&UnityEngine::TextAsset::get_bytes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b59b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextAsset>::get(),
                            "get_bytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextAsset.get_text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextAsset::*)()>(&UnityEngine::TextAsset::get_text)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2b59b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextAsset>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextAsset.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextAsset::*)()>(&UnityEngine::TextAsset::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b59e40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::TextAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextAsset>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TextAsset.DecodeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&UnityEngine::TextAsset::DecodeString)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2b59bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextAsset>::get(),
                            "DecodeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 ::ArrayW<uint8_t> UnityEngine::TextAsset::get_bytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextAsset>::get(),
                            "get_bytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::TextAsset::get_text()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextAsset>::get(),
                            "get_text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::TextAsset::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextAsset>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::TextAsset::DecodeString(::ArrayW<uint8_t> bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TextAsset>::get(),
                            "DecodeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, bytes);
}
