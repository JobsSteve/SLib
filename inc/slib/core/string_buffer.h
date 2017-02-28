#ifndef CHECKHEADER_SLIB_CORE_STRING_BUFFER
#define CHECKHEADER_SLIB_CORE_STRING_BUFFER

#include "string.h"
#include "queue.h"


/**
 * @addtogroup core
 *  @{
 */
namespace slib
{

	/** @class StringBuffer
	 * @brief Queue containing string items. StringBuffer is not thread-safe.
	 */
	class SLIB_EXPORT StringBuffer
	{
	public:
		StringBuffer();
		
		~StringBuffer();

	public:

		/**
		 * Returns total length of all string items.
		 */
		sl_size getLength() const;

		/**
		 * Add string object to the queue.
		 */
		sl_bool add(const String& str);
		
		/**
		 * Add string represented by StringData struct to the queue.
		 */
		sl_bool add(const StringData& str);
		
		/**
		 * Add string pointed by buf to the queue.
		 */
		sl_bool addStatic(const sl_char8* buf, sl_size length);
	
		/**
		 * Add all string items in buf to the current object and then clear buf.
		 */
		void link(StringBuffer& buf);
		
		/**
		 * Clears all items.
		 */
		void clear();
		
		/**
		 * Merge all items and returns the merged string.
		 */
		String merge() const;

		/**
		 * Merge all items and returns it as memory.
		 */
		Memory mergeToMemory() const;
		
	private:
		LinkedQueue<StringData> m_queue;
		sl_size m_len;
		
	};

}
/// @}


/**
 * @addtogroup core
 *  @{
 */
namespace slib
{

	/** @class StringBuffer16
	 * @brief Queue containing String16 items. StringBuffer16 is not thread-safe.
	 */
	class SLIB_EXPORT StringBuffer16
	{
	public:
		StringBuffer16();
		
		~StringBuffer16();

	public:
		/**
		 * Returns total length of all string items.
		 */
		sl_size getLength() const;
		
		/**
		 * Add string object to the queue.
		 */
		sl_bool add(const String16& str);
		
		/**
		 * Add string represented by StringData struct to the queue.
		 */
		sl_bool add(const StringData& str);
		
		/**
		 * Add string pointed by buf to the queue.
		 */
		sl_bool addStatic(const sl_char16* buf, sl_size length);

		/**
		 * Add all string items in buf to the current object and then clear buf.
		 */
		void link(StringBuffer16& buf);
		
		/**
		 * Clears all items.
		 */
		void clear();

		/**
		 * Merge all items and returns the merged string.
		 */
		String16 merge() const;

		/**
		 * Merge all items and returns it as memory.
		 */
		Memory mergeToMemory() const;
		
	private:
		LinkedQueue<StringData> m_queue;
		sl_size m_len;
		
	};
	
}

/// @}

#endif
