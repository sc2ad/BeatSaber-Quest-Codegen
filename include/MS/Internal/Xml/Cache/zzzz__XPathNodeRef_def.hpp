#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
struct XPathNodeRef;
}
// Type: MS.Internal.Xml.Cache::XPathNodeRef
namespace MS::Internal::Xml::Cache {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11711))
// CS Name: MS.Internal.Xml.Cache.XPathNodeRef
struct CORDL_TYPE XPathNodeRef : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_page", ty: "::ArrayW<MS::Internal::Xml::Cache::XPathNode>", modifiers: "", def_value: None }, CppParam { name: "_idx", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XPathNodeRef(::ArrayW<MS::Internal::Xml::Cache::XPathNode> _page, int32_t _idx) noexcept;


                    constexpr XPathNodeRef(XPathNodeRef const&) = default;
                    constexpr XPathNodeRef(XPathNodeRef&&) = default;
                    constexpr XPathNodeRef& operator=(XPathNodeRef const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XPathNodeRef& operator=(XPathNodeRef&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XPathNodeRef(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=__get__page, put=__set__page))  _page;

constexpr void __set__page(::ArrayW<MS::Internal::Xml::Cache::XPathNode> value) ;

constexpr ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __get__page() const;

 int32_t __declspec(property(get=__get__idx, put=__set__idx))  _idx;

constexpr void __set__idx(int32_t value) ;

constexpr int32_t __get__idx() const;


// Properties

 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> __declspec(property(get=get_Page))  Page;

 int32_t __declspec(property(get=get_Index))  Index;


// Methods

/// @brief Method .ctor addr 0x2757e38 size 0xc virtual false final false
 void _ctor(::ArrayW<MS::Internal::Xml::Cache::XPathNode> page, int32_t idx) ;

/// @brief Method get_Page addr 0x2757e44 size 0x8 virtual false final false
 ::ArrayW<MS::Internal::Xml::Cache::XPathNode> get_Page() ;

/// @brief Method get_Index addr 0x2757e4c size 0x8 virtual false final false
 int32_t get_Index() ;

/// @brief Method GetHashCode addr 0x2757e54 size 0x10 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MS::Internal::Xml::Cache
DEFINE_IL2CPP_ARG_TYPE(MS::Internal::Xml::Cache::XPathNodeRef, "MS.Internal.Xml.Cache", "XPathNodeRef");
