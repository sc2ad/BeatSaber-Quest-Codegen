#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BaseShaderInfoStorage_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "freeSlots", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page::UnityEngine__UIElements__UIR__BitmapAllocator32__Page(uint16_t x, uint16_t y, int32_t freeSlots) noexcept : ::bs_hook::ValueTypeWrapper() {this->x = x;
this->y = y;
this->freeSlots = freeSlots;
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page::__set_x(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x0>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page::__get_x() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page::__set_y(uint16_t value)  {
::cordl_internals::setInstanceField<uint16_t, 0x2>(this->__instance, std::forward<uint16_t>(value));
}
constexpr uint16_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page::__get_y() const {
return ::cordl_internals::getInstanceField<uint16_t, 0x2>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page::__set_freeSlots(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page::__get_freeSlots() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
//  Writing Method size for method: UnityEngine::UIElements::UIR::BitmapAllocator32.Construct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::BitmapAllocator32::*)(int32_t, int32_t, int32_t)>(&UnityEngine::UIElements::UIR::BitmapAllocator32::Construct)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d11e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::BitmapAllocator32.ForceFirstAlloc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::BitmapAllocator32::*)(uint16_t, uint16_t)>(&UnityEngine::UIElements::UIR::BitmapAllocator32::ForceFirstAlloc)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2d11f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "ForceFirstAlloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::BitmapAllocator32.Allocate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::UIR::BMPAlloc (UnityEngine::UIElements::UIR::BitmapAllocator32::*)(UnityEngine::UIElements::UIR::BaseShaderInfoStorage)>(&UnityEngine::UIElements::UIR::BitmapAllocator32::Allocate)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x2d120e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BaseShaderInfoStorage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::BitmapAllocator32.Free
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::BitmapAllocator32::*)(UnityEngine::UIElements::UIR::BMPAlloc)>(&UnityEngine::UIElements::UIR::BitmapAllocator32::Free)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2d12568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "Free",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::BitmapAllocator32.get_entryWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::UIR::BitmapAllocator32::*)()>(&UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d126ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "get_entryWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::BitmapAllocator32.get_entryHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::UIElements::UIR::BitmapAllocator32::*)()>(&UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d126b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "get_entryHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::BitmapAllocator32.GetAllocPageAtlasLocation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UIR::BitmapAllocator32::*)(int32_t, ByRef<uint16_t>, ByRef<uint16_t>)>(&UnityEngine::UIElements::UIR::BitmapAllocator32::GetAllocPageAtlasLocation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d126bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "GetAllocPageAtlasLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::UIR::BitmapAllocator32.CountTrailingZeroes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(uint32_t)>(&UnityEngine::UIElements::UIR::BitmapAllocator32::CountTrailingZeroes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d12504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "CountTrailingZeroes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_PageHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Pages", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_AllocMap", ty: "System::Collections::Generic::List_1<uint32_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_EntryWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EntryHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::UIR::BitmapAllocator32::BitmapAllocator32(int32_t m_PageHeight, System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page> m_Pages, System::Collections::Generic::List_1<uint32_t> m_AllocMap, int32_t m_EntryWidth, int32_t m_EntryHeight) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_PageHeight = m_PageHeight;
this->m_Pages = m_Pages;
this->m_AllocMap = m_AllocMap;
this->m_EntryWidth = m_EntryWidth;
this->m_EntryHeight = m_EntryHeight;
}
constexpr void UnityEngine::UIElements::UIR::BitmapAllocator32::__set_m_PageHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::__get_m_PageHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::BitmapAllocator32::__set_m_Pages(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page>, 0x8>(this->__instance, std::forward<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page> UnityEngine::UIElements::UIR::BitmapAllocator32::__get_m_Pages() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page>, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::BitmapAllocator32::__set_m_AllocMap(System::Collections::Generic::List_1<uint32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<uint32_t>, 0x10>(this->__instance, std::forward<System::Collections::Generic::List_1<uint32_t>>(value));
}
constexpr System::Collections::Generic::List_1<uint32_t> UnityEngine::UIElements::UIR::BitmapAllocator32::__get_m_AllocMap() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<uint32_t>, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::BitmapAllocator32::__set_m_EntryWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::__get_m_EntryWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::UIR::BitmapAllocator32::__set_m_EntryHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::__get_m_EntryHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
/// @param entryWidth: int32_t (default: 1)
/// @param entryHeight: int32_t (default: 1)
 void UnityEngine::UIElements::UIR::BitmapAllocator32::Construct(int32_t pageHeight, int32_t entryWidth, int32_t entryHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, pageHeight, entryWidth, entryHeight);
}
 void UnityEngine::UIElements::UIR::BitmapAllocator32::ForceFirstAlloc(uint16_t firstPageX, uint16_t firstPageY)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "ForceFirstAlloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, firstPageX, firstPageY);
}
 UnityEngine::UIElements::UIR::BMPAlloc UnityEngine::UIElements::UIR::BitmapAllocator32::Allocate(UnityEngine::UIElements::UIR::BaseShaderInfoStorage storage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BaseShaderInfoStorage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::UIR::BMPAlloc, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, storage);
}
 void UnityEngine::UIElements::UIR::BitmapAllocator32::Free(UnityEngine::UIElements::UIR::BMPAlloc alloc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "Free",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::UIR::BMPAlloc>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, alloc);
}
 int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "get_entryWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t UnityEngine::UIElements::UIR::BitmapAllocator32::get_entryHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "get_entryHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::UIElements::UIR::BitmapAllocator32::GetAllocPageAtlasLocation(int32_t page, ByRef<uint16_t> x, ByRef<uint16_t> y)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "GetAllocPageAtlasLocation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, page, x, y);
}
 uint8_t UnityEngine::UIElements::UIR::BitmapAllocator32::CountTrailingZeroes(uint32_t val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::UIR::BitmapAllocator32>::get(),
                            "CountTrailingZeroes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, val);
}
