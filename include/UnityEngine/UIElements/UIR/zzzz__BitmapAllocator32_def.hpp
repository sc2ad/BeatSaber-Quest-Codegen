#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements::UIR {
class BaseShaderInfoStorage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__BitmapAllocator32__Page;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct BitmapAllocator32;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__BitmapAllocator32__Page;
}
// Type: ::Page
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7475))
// CS Name: UnityEngine.UIElements.UIR.BitmapAllocator32::Page
struct CORDL_TYPE UnityEngine__UIElements__UIR__BitmapAllocator32__Page : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "freeSlots", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__BitmapAllocator32__Page(uint16_t x, uint16_t y, int32_t freeSlots) noexcept;


                    constexpr UnityEngine__UIElements__UIR__BitmapAllocator32__Page(UnityEngine__UIElements__UIR__BitmapAllocator32__Page const&) = default;
                    constexpr UnityEngine__UIElements__UIR__BitmapAllocator32__Page(UnityEngine__UIElements__UIR__BitmapAllocator32__Page&&) = default;
                    constexpr UnityEngine__UIElements__UIR__BitmapAllocator32__Page& operator=(UnityEngine__UIElements__UIR__BitmapAllocator32__Page const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__BitmapAllocator32__Page& operator=(UnityEngine__UIElements__UIR__BitmapAllocator32__Page&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__BitmapAllocator32__Page(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint16_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(uint16_t value) ;

constexpr uint16_t __get_x() const;

 uint16_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(uint16_t value) ;

constexpr uint16_t __get_y() const;

 int32_t __declspec(property(get=__get_freeSlots, put=__set_freeSlots))  freeSlots;

constexpr void __set_freeSlots(int32_t value) ;

constexpr int32_t __get_freeSlots() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::BitmapAllocator32
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7476))
// CS Name: UnityEngine.UIElements.UIR.BitmapAllocator32
struct CORDL_TYPE BitmapAllocator32 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Page = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page;

// Ctor Parameters [CppParam { name: "m_PageHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Pages", ty: "System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page>", modifiers: "", def_value: None }, CppParam { name: "m_AllocMap", ty: "System::Collections::Generic::List_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_EntryWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EntryHeight", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BitmapAllocator32(int32_t m_PageHeight, System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page> m_Pages, System::Collections::Generic::List_1<uint32_t> m_AllocMap, int32_t m_EntryWidth, int32_t m_EntryHeight) noexcept;


                    constexpr BitmapAllocator32(BitmapAllocator32 const&) = default;
                    constexpr BitmapAllocator32(BitmapAllocator32&&) = default;
                    constexpr BitmapAllocator32& operator=(BitmapAllocator32 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BitmapAllocator32& operator=(BitmapAllocator32&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BitmapAllocator32(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_PageHeight, put=__set_m_PageHeight))  m_PageHeight;

constexpr void __set_m_PageHeight(int32_t value) ;

constexpr int32_t __get_m_PageHeight() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page> __declspec(property(get=__get_m_Pages, put=__set_m_Pages))  m_Pages;

constexpr void __set_m_Pages(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page> __get_m_Pages() const;

 System::Collections::Generic::List_1<uint32_t> __declspec(property(get=__get_m_AllocMap, put=__set_m_AllocMap))  m_AllocMap;

constexpr void __set_m_AllocMap(System::Collections::Generic::List_1<uint32_t> value) ;

constexpr System::Collections::Generic::List_1<uint32_t> __get_m_AllocMap() const;

 int32_t __declspec(property(get=__get_m_EntryWidth, put=__set_m_EntryWidth))  m_EntryWidth;

constexpr void __set_m_EntryWidth(int32_t value) ;

constexpr int32_t __get_m_EntryWidth() const;

 int32_t __declspec(property(get=__get_m_EntryHeight, put=__set_m_EntryHeight))  m_EntryHeight;

constexpr void __set_m_EntryHeight(int32_t value) ;

constexpr int32_t __get_m_EntryHeight() const;


// Properties

 int32_t __declspec(property(get=get_entryWidth))  entryWidth;

 int32_t __declspec(property(get=get_entryHeight))  entryHeight;


// Methods

/// @brief Method Construct addr 0x2d11e0c size 0x110 virtual false final false
 void Construct(int32_t pageHeight, int32_t entryWidth, int32_t entryHeight) ;

/// @brief Method ForceFirstAlloc addr 0x2d11f1c size 0x1cc virtual false final false
 void ForceFirstAlloc(uint16_t firstPageX, uint16_t firstPageY) ;

/// @brief Method Allocate addr 0x2d120e8 size 0x41c virtual false final false
 UnityEngine::UIElements::UIR::BMPAlloc Allocate(UnityEngine::UIElements::UIR::BaseShaderInfoStorage storage) ;

/// @brief Method Free addr 0x2d12568 size 0x144 virtual false final false
 void Free(UnityEngine::UIElements::UIR::BMPAlloc alloc) ;

/// @brief Method get_entryWidth addr 0x2d126ac size 0x8 virtual false final false
 int32_t get_entryWidth() ;

/// @brief Method get_entryHeight addr 0x2d126b4 size 0x8 virtual false final false
 int32_t get_entryHeight() ;

/// @brief Method GetAllocPageAtlasLocation addr 0x2d126bc size 0x78 virtual false final false
 void GetAllocPageAtlasLocation(int32_t page, ByRef<uint16_t> x, ByRef<uint16_t> y) ;

/// @brief Method CountTrailingZeroes addr 0x2d12504 size 0x64 virtual false final false
static uint8_t CountTrailingZeroes(uint32_t val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::BitmapAllocator32, "UnityEngine.UIElements.UIR", "BitmapAllocator32");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__BitmapAllocator32__Page, "UnityEngine.UIElements.UIR", "BitmapAllocator32/Page");
